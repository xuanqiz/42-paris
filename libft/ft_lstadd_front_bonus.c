/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:16:58 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/18 19:29:02 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}

/*
** first of all, because **alst and *new are both t_list
** there is both void *content and t_list *next in them
** then, notice that alst is **, and new is *,
** which means **alst is the head pointer, it only indicates the first *alst
** we take all of alst(*alst) and give it to the next of new
** in the new "new", it is composed as content of original new + alst
** which is what we expected
*/
