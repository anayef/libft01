/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:36:10 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 11:36:46 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*#include <unistd.h>
#include <ctype.h>
int main()
{
	int a = '6';
	if (isdigit(a))
		write(1, "isdigit\n", 8);
	if (ft_isdigit(a))
		write(1, "isdigit\n", 8);
	return(0);
}*/
