/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:37:07 by anayef            #+#    #+#             */
/*   Updated: 2022/12/02 12:37:14 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new;
	t_list		*p_new;
	t_list		*p_old;

	if (!f || !del || !lst)
		return (0);
	new = ft_lstnew((*f)(lst->content));
	if (!lst || !(new))
		return (NULL);
	p_new = new;
	p_old = lst->next;
	while (p_old)
	{
		p_new->next = ft_lstnew((*f)(p_old->content));
		if (!(p_new->next))
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		p_new = p_new->next;
		p_old = p_old->next;
	}
	return (new);
}
