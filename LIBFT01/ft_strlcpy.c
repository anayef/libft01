/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 12:04:57 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 15:26:50 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
//#include <bsd/string.h>
//#include <stdlib.h>

//size_t ft_strlen(const char *str);

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	sizeofsrc;
	size_t	i;

	i = 0;
	sizeofsrc = ft_strlen(src);
	if (!dest || !src)
		return (0);
	if (size != 0)
	{
		while (src[i] != '\0' && i + 1 < size)
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	}
	return (sizeofsrc);
}

/*int main()
{

	char dest[15];
	ft_strlcpy(dest, "lorem", 15);
	printf("Own : %s\n", dest);
	printf("Own length : %ld\n", ft_strlen(dest));
	char desto[15];
	strlcpy(desto, "lorem", 15);
	printf("Ori : %s\n", desto);
	printf("Ori length : %ld\n", ft_strlen(desto));
	printf("\n\n\n");
	char dest1[15];
	ft_strlcpy(dest1, "", 15);
	printf("Own : %s\n", dest1);
	printf("Own length : %ld\n", ft_strlen(dest1));
	char dest1o[15];
	strlcpy(dest1o, "", 15);
	printf("Ori : %s\n", dest1o);
	printf("Ori length : %ld\n", ft_strlen(dest1o));
	printf("\n\n\n");
	char dest2[15];
	ft_strlcpy(dest2, "lorem ipsum", 3);
	printf("Own : %s\n", dest2);
	printf("Own length : %ld\n", ft_strlen(dest2));
	char dest2o[15];
	strlcpy(dest2o, "lorem ipsum", 3);
	printf("Ori : %s\n", dest2o);
	printf("Ori length : %ld\n", ft_strlen(dest2o));
	printf("\n\n\n");
	char dest3[15];
	ft_strlcpy(dest3, "lorem ipsum dolor sit amet", 15);
	printf("Own : %s\n", dest3);
	printf("Own length : %ld\n", ft_strlen(dest3));
	char dest3o[15];
	strlcpy(dest3o, "lorem ipsum dolor sit amet", 15);
	printf("Ori : %s\n", dest3o);
	printf("Ori length : %ld\n", ft_strlen(dest3o));
	printf("\n\n\n");
	char dest4[15];
	ft_strlcpy(dest4, "lorem ipsum dolor sit amet", 0);
	printf("Own : %s\n", dest4);
	printf("Own length : %ld\n", ft_strlen(dest4));
//	char dest4o[15];
//	strlcpy(dest4o, "lorem ipsum dolor sit amet", 0);
//	printf("Ori : %s\n", dest4o);
//	printf("Ori length : %ld\n", ft_strlen(dest4o));

}*/
