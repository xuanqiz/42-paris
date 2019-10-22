/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:44:07 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/22 21:50:12 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*begin;

	begin = *alst;
	if (alst && *alst && new)
	{
		if (*alst == NULL)
			*alst = new;
		else
		{
			while (begin->next)
				begin = begin->next;
			begin->next = new;
		}
	}
}

/*
** the same as add_front, add condition to find the last memory space
** then replace it by *new
*/
