/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:34:48 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 11:35:38 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
int main()
{
	int a = '1';
	if (isalpha(a))
		printf("%s\n", "isalpha");
	if (ft_isalpha(a))
		printf("%s\n", "isalpha");
	return(0);
}*/
