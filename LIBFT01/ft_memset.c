/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:49:16 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 11:49:48 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <bsd/string.h>
//#include <string.h>

void	*ft_memset(void *str, int c, size_t n)

{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}

/*int main()
{
	char a[10];
	char b[10];
	ft_memset(a, '&', 7);
	printf("own_fun : %s\n", a);

	memset(b, '&', 7);
	printf("Ori_fun : %s\n", b);


	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	ft_memset(arr, '5', 5);
	ft_memset(arr +5, '4', 5);

	int i = 0;
	while( i < 10)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
		i++;
	}
	return(0);
}*/
