/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 12:11:16 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 17:38:16 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>

/* int ft_strlen(const char *s)
{
	size_t i;
	i = 0;
	while (s[i] != '\0')
		i++;
	return(i);
}

char *ft_strchr(const char *s, int c)
{
	size_t i;
	i = 0;
	while (s[i] != '\0')
	{
		if(s[i] == c)
			return((char*)&s[i]);
		i++;
	}
	return(0);
}


char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	i = 0;
	char *dest;
	dest = malloc(sizeof(char)*len +1);
	if (!dest)
		return (0);
	while(s[start] != '\0' && i<len)
		dest[i++] = s[start++];

	dest[i] = '\0';
	return(dest);
} */

char	*ft_strtrim(char const *s1, char const*set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/* int main()
{
	char a3[] = "   ";
	char b3[] = " ";
	char *c3 = ft_strtrim(a3,b3);
	printf("ft_strtrim : %s\n", c3);
	char a1[] = "zaina @zanzoon";
	char *b1 = ft_strchr(a1, '@');
	printf("ft_strchr : %s\n", b1);
	char a[] = "ahmad";
	int c = 2;
	char *b = ft_substr(a, c, 3);
	printf("ft_substr : %s\n", b);
}
 */
