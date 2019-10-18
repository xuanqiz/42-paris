/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:47:14 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/18 17:51:33 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	t_list *successor;

	temp = *lst;
	while (temp)
	{
		successor = temp->next;
		del (temp->content);
		free (temp);
		temp = successor;
	}
	*lst = NULL;
}

/*
**
*/
