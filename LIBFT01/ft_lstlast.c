/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 23:15:30 by anayef            #+#    #+#             */
/*   Updated: 2022/11/30 23:15:37 by anayef           ###   ########.fr       */
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

t_list *ft_listnew(void *content)
{
	t_list *new;
	new = malloc(sizeof(t_list));
	if (!new)
		return(NULL);
	new->content = content;
	new->next = NULL;
	return(new);
}*/

t_list	*ft_lstlast(t_list *p)
{
	if (!p)
		return (0);
	while (p->next != NULL)
		p = p->next;
	return (p);
}

/*void ft_print_char(t_list *p)
{
	int i; 
	i = 0;
	while(((char *)p->content)[i])
		i++;
	write(1, p->content, i);
	write(1, "\n", 1);
}


int main()
{
	t_list *p1;
	t_list *p2;
	t_list *p3;
	t_list *p4;
	t_list *last;
	char *s1 = strdup("ahmad");
	char *s2 = strdup("nayef");
	char *s3 = strdup("abed");
	char *s4 = strdup("almahmoud");
	p1 = ft_listnew(s1);
	p2 = ft_listnew(s2);
	p3 = ft_listnew(s3);
	p4 = ft_listnew(s4);
	p1->next = p2;
	p2->next = p3;
	p3->next = p4;
	p4->next = NULL;
	last = ft_lstlast(p1);
	ft_print_char(last);
}*/
