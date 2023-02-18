/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:30:11 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 11:31:13 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;
	i = 0;
	while(i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}*/
void	ft_bzero(void	*str, size_t	n)
{
	ft_memset(str, '\0', n);
}

/*int main()
{
	//char a[] = "12345";
	//bzero(a,2);
	//printf("%s\n", &a[2]);
	//char a1[] = "12345";
	//ft_bzero(NULL, 0x12);
	//printf("%s\n", a1);
}*/
