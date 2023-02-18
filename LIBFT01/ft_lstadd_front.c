/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:39:54 by anayef            #+#    #+#             */
/*   Updated: 2022/11/27 11:39:55 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <unistd.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
}t_list;

t_list *ft_lstnew(void *content)
{
	t_list *new;
	new = malloc(sizeof(t_list));
	if(!new)
		return(0);
	new->content = content;
	new->next = 0;
	return(new);
}

void ft_print_char(t_list *p)
{
	int i;
	i = 0;
	while(((char *)p->content)[i])
		i++;
	write(1, p->content, i);
	write(1, "\n", 1);
}

void ft_print_list(t_list *p)
{
	while(p != NULL)
	{
		ft_print_char(p);
		p = p->next;
	}
}*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int main()
{
	t_list *new;
	t_list *new1;
	t_list *new2;
	t_list *p;
	char *str = strdup("ahmad");
	char *strnew = strdup("new");
	char *strnew1 = strdup("new1");
	char *strnew2 = strdup("new2");
	p = ft_lstnew(str);
	new = ft_lstnew(strnew);
	new1 = ft_lstnew(strnew1);
	new2 = ft_lstnew(strnew2);
	p->next = NULL;
	ft_lstadd_front(&new, p);
	ft_lstadd_front(&new1, new);
	ft_lstadd_front(&new2, new1);
	//ft_print_char(new);
	ft_print_list(p);
}*/
