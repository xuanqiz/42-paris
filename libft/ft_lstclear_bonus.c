/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:47:14 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/18 21:20:31 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	t_list *successor;

	temp = *lst;
	while (temp)
	{
		successor = temp->next;
		del(temp->content);
		free(temp);
		temp = successor;
	}
	*lst = NULL;
}

/*
** this is an update version of ft_lstdelone
** because it does not only delete one content, it also deletes the next one
** the logic here is:
** we take next and put it into successor first,
** and then delete the current content and free its address
** we take the next(successor) and put it as the one we are going to deal
*/
