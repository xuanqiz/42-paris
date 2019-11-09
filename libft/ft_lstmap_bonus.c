/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 12:37:55 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/09 12:01:54 by xzhao            ###   ########.fr       */
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

/*
** firstly, we test whether lst exist -- for protection
** we now create the new list by ft_lstnew, applies function
** write it to the current and let this one be the first
** then we move to the next
** we do this again if the next exists in lst
** the only new step is : if there is something wrong
** we need to use ft_lstclear to delete all lst that we have read
** ft_lstclear delete the list from the begining till current
** so it goes back to the &first
** to release the memory space
** return new list == return the begining of the list
*/
