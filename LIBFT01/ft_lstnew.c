/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:25:18 by anayef            #+#    #+#             */
/*   Updated: 2022/11/30 21:25:38 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>
//#include <stdlib.h>
//#include <string.h>

/*typedef struct content
{
	void * content;
	struct s_list * next;
}t_list;

void ft_print_char(t_list *p)
{
	int i; 
	i = 0;
	while(((char *)p->content)[i])
		i++;
	write(1, p->content, i);
	write(1, "\n",1);
}

void ft_print_i(int n)
{
	char c;
	if(n > 9)
		ft_print_i(n/10);
	c = n%10 + '0';
	write(1, &c, 1);
}

void ft_print_c(char const *s)
{
	int i; 
	i = 0;
	while (s[i] != '\0')
		i++;
	write(1, s, i);
	write(1, "\n", 1);
}
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*p;

	p = malloc(sizeof(t_list));
	if (!p)
		return (0);
	p->content = content;
	p->next = 0;
	return (p);
}

/*int main()
{
	t_list *new;
	//char *dest;

	char *str = strdup("ahmad");
	//int i = 42;
	new = ft_lstnew(str);

	//ft_print_char(new);
}*/
