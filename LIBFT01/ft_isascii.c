/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:35:44 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 11:35:55 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include <unistd.h>
#include <ctype.h>
int main()
{
	int a = '&';
	if (isascii(a))
		write(1, "isascii\n", 8);
	if (ft_isascii(a))
		write(1, "isascii\n", 8);
	return(0);
}*/
