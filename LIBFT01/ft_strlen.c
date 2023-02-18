/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 12:05:53 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 12:06:23 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*#include<stdio.h>
#include <string.h>
int main()
{
	char str[] = "ahmad";
	int a = strlen(str);
	int b = ft_strlen(str);
	printf("ori_fun = %d\n", a);
	printf("own_fun = %d\n", b);
	return(0);
}*/
