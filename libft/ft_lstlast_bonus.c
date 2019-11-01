/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:29:03 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/01 12:12:23 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *list;

	if ((list = lst) == NULL)
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
}

/*
** firstly check whether it is an empty list
** then when there is a next, just take it until the last one
*/
