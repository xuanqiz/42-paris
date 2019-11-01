/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 12:37:55 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/01 12:48:08 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*d)(void *))
{
	t_list	*prev_elem;
	t_list	*current_elem;
	t_list	*first_elem;

	if (lst == 0)
		return (0);
	prev_elem = 0;
	if (!(current_elem = ft_lstnew(f(lst->content))))
		return (0);
	first_elem = current_elem;
	lst = lst->next;
	while (lst)
	{
		prev_elem = current_elem;
		if (!(current_elem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&first_elem, d);
			return (0);
		}
		prev_elem->next = current_elem;
		lst = lst->next;
	}
	return (first_elem);
}
