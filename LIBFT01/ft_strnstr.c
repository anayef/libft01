/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 12:09:57 by anayef            #+#    #+#             */
/*   Updated: 2022/12/11 18:09:49 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (*little == 0 || big == little)
		return ((char *) big);
	if (!len)
		return (NULL);
	while (big[i] != '\0' && i < len)
	{
		if (big [i] == little [j])
		{
			while (big[i + j] == little [j] && (i + j) < len)
			{
				if (little [j + 1] == '\0')
					return ((char *)big + i);
			j++;
			}
		j = 0;
		}
		i++;
	}
	return (0);
}

/*int main()
{
	const char *largestring =  "aaabcabcd";
	const char *smallstring = "abc";
	char *empty = (char*)"aaabbbbbb";
	char *ptr;
	char *ptr_own;
	ptr_own = ft_strnstr(empty, "ab", 8);
	printf("Own_fun : %s\n", ptr_own);
	ptr = strnstr(empty, "ab", 8);
	printf("Ori_fun : %s\n", ptr);
}*/
