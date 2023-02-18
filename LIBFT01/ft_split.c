/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:52:42 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 17:55:01 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <stdlib.h>
#include <string.h> */

static int	count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i])
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return (count);
}

static void	make_words(char **words, char const *s, char c, size_t n_words)
{
	char	*ptr_c;

	while (*s && *s == c)
		s++;
	while (n_words--)
	{
		ptr_c = ft_strchr(s, c);
		if (ptr_c != NULL)
		{
			*words = ft_substr(s, 0, ptr_c - s);
			while (*ptr_c && *ptr_c == c)
				ptr_c++;
			s = ptr_c;
		}
		else
			*words = ft_substr(s, 0, ft_strlen(s) + 1);
		words++;
	}
	*words = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		num_words;
	char	**words;

	if (s == NULL)
		return (NULL);
	num_words = count_words(s, c);
	words = malloc(sizeof(words) * (num_words + 1));
	if (words == NULL)
		return (NULL);
	make_words(words, s, c, num_words);
	return (words);
}
/* int main()
{
	char a[] = "    ";
	char c = ' ';
	int count;
	count = count_words(a, c);
	printf(" No_of_words : %d\n" , count);

	int i = 0;
	char **split;
	split = ft_split(a, c);
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}

} */
