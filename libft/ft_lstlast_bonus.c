/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:29:03 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/18 17:52:00 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *last;
	t_list *temp;

	temp = lst;
	while (temp)
	{
		if (!(temp->next))
			last = temp;
		temp = temp->next;
	}
	return (last);
}

/*
** we need a *temp(ortary) t_list to take the value of lst,
** so that we can modify it ??
*/
