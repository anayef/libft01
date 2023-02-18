/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:44:48 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 11:46:25 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)

{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

/*int main()
{
	char dest[15] = "";
	char src[] = "";
	ft_memcpy(dest, src, 0);
	//char *ori_fun = memcpy(a, b, 0);
	printf("own_fun : %s\n", dest);

	char a[15] = "";
	char b[] = "";
	memcpy(a, b, 0);
	printf("Ori_fun : %s\n", a);

}*/
