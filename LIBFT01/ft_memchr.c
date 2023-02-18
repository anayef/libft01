/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:40:51 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 13:49:26 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
void	*ft_memchr(const void *s, int c, size_t n)
{	
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
/*int main()
{

	//int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	//printf("%s\n", (char *)ft_memchr(tab, -1, 7));
	//printf("%s\n", (char *)memchr(tab, -1, 7));
	char *tweet = ft_memchr("bonjour",'o',3);
	char *tweet1= memchr("bonjour",'o',3);
	printf("own_fun : %s\n", tweet);
	printf("Ori_fun : %s\n", tweet1);
}*/
