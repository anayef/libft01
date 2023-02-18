/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:31:00 by anayef            #+#    #+#             */
/*   Updated: 2022/12/11 19:40:13 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <unistd.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_list{
	void *content;
	struct s_list *next;
}t_list;

t_list *ft_listnew(void *content)
{
	t_list *new;
	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

t_list *ft_lstlast(t_list *p)
{
	while (p != NULL && p->next !=NULL)
		p = p->next;
	return (p);
}

void ft_lstadd_back(t_list **lst, t_list *p)
{
	if (*lst == 0)
		*lst = p;
	else
		(ft_lstlast(*lst))->next = p;
}

void ft_print_c(t_list *p)
{
	int i;
	i = 0;
	while(((char*)p->content)[i])
		i++;
	write(1, p->content, i);
	write(1, "\n", 1);
}

void ft_print_l(t_list *p)
{
	while(p != NULL)
	{
		ft_print_c(p);
		p = p->next;
	}
}

void ft_del(void *content)
{
	free(content);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*int main()
{
	t_list *p1;
	t_list *p2;
	t_list *p3;
	t_list *p4;
	t_list *back;
	char *s1 = strdup("ahmad");
	char *s2 = strdup("nayef");
	char *s3 = strdup("abed");
	char *s4 = strdup("al mahmoud");
	char *sback = strdup("zaina");
	p1 = ft_listnew(s1);
	p2 = ft_listnew(s2);
	p3 = ft_listnew(s3);
	p4 = ft_listnew(s4);
	back = ft_listnew(sback);
	p1->next = p2;
	p2->next = p3;
	p3->next = p4;
	p4->next = NULL;
	ft_print_l(p1);
	write(1, "\n\n\n",3);
	ft_lstdelone(p3, &ft_del);
	ft_print_l(p1);

}*/
