/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 14:20:10 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 14:59:21 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include <stdio.h>
#include <string.h> */

/* size_t ft_strlen(const char *str)
{
	size_t i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}
 */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!dst && !size)
		return (0);
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
// void	ft_print_result(int n)
// {
// 	char c;

// 	if (n >= 10)
// 		ft_print_result(n / 10);
// 	c = n % 10 + '0';
// 	write (1, &c, 1);
// }
// int		main(int argc, const char *argv[])
// {
// 	char	*dest;
// 	int		arg;

// 	alarm(5);
// 	if (!(dest = (char *)malloc(sizeof(*dest) * 15)) || argc == 1)
// 		return (0);
// 	memset(dest, 0, 15);
// 	memset(dest, 'r', 6);
// 	if ((arg = atoi(argv[1])) == 1)
// 	{
// 		dest[11] = 'a';
// 		ft_print_result(ft_strlcat(dest, "lorem", 15));
// 		write(1, "\n", 1);
// 		write(1, dest, 15);
// 	}
// }
/*
int main()
 {

        char a1[11] = "a";
        char b1[] = " lorem";
         int own = ft_strlcat(a1, b1, 3);
        printf("own_fun : %s\n", a1);
 	printf("own_fun_len : %d\n", own);

 	    char a[11] = "a";
         char b[] = " lorem";
         int ori = strlcat(a, b, 3);
         printf("Ori_fun : %s\n", a);
 	printf("ori_fun_len : %d\n", ori);
 }
 */
