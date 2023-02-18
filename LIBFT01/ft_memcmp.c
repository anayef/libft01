/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:43:36 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 11:44:38 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
			i++;
		else
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	}
	return (0);
}

/*int main()
{

	int ft_cmp = ft_memcmp("abcdefgh", "abcdwxyz", 6);
	printf("own_fun : %d\n", ft_cmp);
	int cmp = memcmp("abcdefgh", "abcdwxyz", 6);
	printf("Ori_fun : %d\n", cmp);
}*/
