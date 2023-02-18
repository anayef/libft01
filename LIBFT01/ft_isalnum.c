/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:32:57 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 11:34:39 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*#include <unistd.h>
#include <ctype.h>
int main()
{
	int a = '9';
	int b = 'b';

	if (isalnum(a))
		write(1, "isalnum\n", 8);
	if (isalnum(b))
		write(1, "isalnum\n", 8);
	if (ft_isalnum(a))
		write(1, "isalnum\n", 8);
	if (ft_isalnum(b))
		write(1,"isalnum\n", 8);
	return (0);
}*/
