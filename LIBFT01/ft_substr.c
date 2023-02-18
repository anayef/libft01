/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 12:12:17 by anayef            #+#    #+#             */
/*   Updated: 2022/12/11 18:09:11 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

//int ft_strlen(char const *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len >= ft_strlen(s) && start <= ft_strlen(s))
		dest = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	while (start <= ft_strlen((char *)s) && i < len)
	{
		dest[i] = s[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main()
{
	char a[] = "ahmad nayef";
	char *test = ft_substr(a, 5, 3);
	printf(" test : %s\n", test);
}*/
