/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 12:06:30 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 12:20:57 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>*/

//int ft_strlen(const char *s);

/*char	ft_cap(unsigned int ,char c)
{
	if (c >= 'a' && c <= 'z')
		c = c -32;
	return(c);

}*/

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*strmapi;

	if (!s || !f)
		return (0);
	i = 0;
	strmapi = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!strmapi)
		return (0);
	while (i < ft_strlen(s))
	{
		strmapi[i] = f(i, s[i]);
		i++;
	}
	strmapi[i] = '\0';
	return (strmapi);
}

/*int main()
{
	char a[] = "ahAadjdskjkfjkjnlkj";
	printf("%s\n",ft_strmapi(a, &ft_cap));
}*/
