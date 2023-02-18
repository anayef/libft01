/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:46:32 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 11:49:08 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	if ((size_t)dest - (size_t)src < n)
	{
		i = n - 1;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*int main ()

{
	char src[] = "lorem ipsum dolor sit amet";
	char *dest;
	dest = src + 1;
//	ft_memmove(dest, "consectetur", 5);
//	ft_memmove(dest, "con\0sec\0\0te\0tur", 10);
//	ft_memmove(dest, src, 8);
//	ft_memmove(src, dest, 8);
//	ft_memmove(src, dest, 0);
//	printf("OWN TEST : %s\n", dest);
//	memmove(dest, "consectetur", 5);
//	memmove(dest, "con\0sec\0\0te\0tur", 10);
//	memmove(dest, src, 8);
//	memmove(src, dest, 8);
	memmove(src, dest, 0);
	printf("ORI TEST : %s\n", dest);

}*/
