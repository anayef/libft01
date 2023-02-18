/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 22:48:21 by anayef            #+#    #+#             */
/*   Updated: 2022/11/30 22:48:29 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <unistd.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_list
{
	void * content;
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

void ft_printnbr(int nb)
{
	if(nb > 9)
		ft_printnbr(nb/10);
	nb = nb%10 + 48;
	write(1, &nb, 1);
}*/

int	ft_lstsize(t_list *p)
{
	int	i;

	i = 0;
	while (p != NULL)
	{
		p = p->next;
		i++;
	}
	return (i);
}

/*int main()
{
	t_list *p1; 
	t_list *p2;
	t_list *p3;
	int i;
	char *s1 = strdup("ahmad");
	char *s2 = strdup("nayef");
	char *s3 = strdup("abed al mahmoud");
	p1 = ft_listnew(s1);
	p2 = ft_listnew(s2);
	p3 = ft_listnew(s3);
	p1->next = p2;
	p2->next = p3;
	p3->next = NULL;
	i = ft_lstsize(p1);
	ft_printnbr(i);
}*/
