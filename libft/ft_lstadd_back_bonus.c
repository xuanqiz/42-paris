/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:44:07 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/08 21:40:41 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	tmp = *alst;
	if (!tmp)
		*alst = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

/*
** the same as add_front, add condition to find the last memory space
** then replace it by new
** the logic here is:
** if the alst does not exist, just write new into it
** if the alst exists, let's use while loop to locate the ending of the list
** which means if the next exist, keep going
** until the tmp->next doesn't exist
** then write new
*/
