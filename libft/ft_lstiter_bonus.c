/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:49:09 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/01 12:14:34 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *iter;

	if ((iter = lst) == NULL)
		return ;
	while (iter)
	{
		f(iter->content);
		iter = iter->next;
	}
}

/*
** we apply given function void *f() to each content of iter
** the logic here is:
** firstly, check whether lst is an empty list
** while it exist, apply the funtion and move to the content of next one
** by moving forward, we use the next to rewrite the current
*/
