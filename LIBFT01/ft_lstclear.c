/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:05:04 by anayef            #+#    #+#             */
/*   Updated: 2022/12/01 14:05:06 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list{
	void *content;
	struct s_list *next;
}t_list;

t_list *ft_listnew(void *content)
{
	t_list *new;
	new = malloc(sizeof(t_list));
	if(!new)
		return(NULL);
	new->content = content;
	new->next = NULL;
	return(new);
}

void ft_del(void *content)
{
	free(content);
}

void ft_lstdelone(t_list *lst, void(*del)(void*))
{
	if(!lst)
		return;
	del(lst->content);
	free(lst);
}*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*p;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		p = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = p;
	}
}

/*void ft_print_c(t_list *p)
{
	int i; 
	i = 0;
	while(((char*)p->content)[i])
		i++;
	write(1, p->content, i);
	write(1, "\n",1);
}

void ft_print_l(t_list *p)
{
	while(p != NULL)
	{
		ft_print_c(p);
		p = p->next;
	}
}

int main()
{
	t_list *p1;
	t_list *p2;
	t_list *p3;
	char *s1 = strdup("ahmad");
	char *s2 = strdup("nayef");
	char *s3 = strdup("abed");
	p1 = ft_listnew(s1);
	p2 = ft_listnew(s2);
	p3 = ft_listnew(s3);
	p1->next = p2;
	p2->next = p3;
	p3->next = NULL;
	ft_lstclear(&p3, &ft_del);
	ft_print_l(p1);
}*/
