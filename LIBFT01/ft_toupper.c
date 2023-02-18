/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 12:14:52 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 12:15:24 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int main()
{
	int a = 'b';
	printf("own_fun : %c\n", ft_toupper(a));
	printf("ori_fun : %c\n", toupper(a));
}*/
