/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:29:03 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/18 21:19:35 by xzhao            ###   ########.fr       */
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
** so that we keep the original lst while finding the last element,
** the logic of this one is:
** when temp (lst) exists, check whether it is reaches to the end
** if it reaches to the end, take it and assign it to (*last)
** if not, keep going [temp = temp->next] equivilant to i++ in the string
*/
