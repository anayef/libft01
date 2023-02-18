/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:58:28 by anayef            #+#    #+#             */
/*   Updated: 2022/12/11 20:12:44 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
// #include <string.h>
#include <stdlib.h>


//ngngyj
//trhty
char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*s2;

	len = ft_strlen(s) + 1;
	i = 0;
	s2 = malloc(sizeof(char) * (len));
	if (!s2)
		return (0);
	while (s[i] != '\0')
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
