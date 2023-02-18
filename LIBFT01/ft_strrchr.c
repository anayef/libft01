/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 12:10:46 by anayef            #+#    #+#             */
/*   Updated: 2022/12/11 19:31:57 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

//size_t ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == ((char)c))
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*int main()
{
	char a[] = "ahmad";
	//int c = 0;
	printf("own_fun : %s\n", ft_strrchr(a,0));
	printf("Ori_fun : %s\n", strrchr(a,0));
}*/
