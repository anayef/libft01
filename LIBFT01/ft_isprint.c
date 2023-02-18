/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:37:12 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 11:37:25 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*#include <unistd.h>
#include <ctype.h>
int main()
{
	int c = ' ';
	if (isprint(c))
		write(1, "isprint\n", 8);
	if (ft_isprint(c))
		write(1, "isprint\n", 8);
	return(0);
}*/
