/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 12:13:57 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 12:14:43 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int main()
{
	int c = 'Y';
	printf("own_fun : %c\n", ft_tolower(c));
	printf("Ori_fun : %c\n", tolower(c));
}*/
