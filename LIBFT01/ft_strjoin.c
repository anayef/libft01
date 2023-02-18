/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 12:00:36 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 14:46:29 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char const *s)
{
	int i;
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*strjoin;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	strjoin = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) +1));
	if (!strjoin)
		return (0);
	while (s1[i] != '\0')
	{
		strjoin[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		strjoin[i++] = s2[j++];
	strjoin[i] = '\0';
	return (strjoin);
}

// int main()
// {
// 	char a[] = "ahmad";
// 	char b[] = " nayef";
// 	char *c = ft_strjoin(a,b);
// 	printf("strjoin = %s\n", c);
// }
