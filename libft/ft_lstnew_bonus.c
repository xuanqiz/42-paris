/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:05:25 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/18 17:16:02 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new;

	new = (t_list)malloc(sizeof(t_list));
	if (new)
	{
		new->content = content;
		new->next = NULL;
	}
	return (new);
}

/*
** first thing for bonus part: add _bonus.c after the function name
** according to typedef struct of t_list
** when we have a function returns to this type of value
** it returns a struct includes both a void *content
** and struct itself(like iterative) *next
** for *next, it includes void *content and struct *next again
** t_list is the name of struct, like type char, int, but not a single value
** it has 2 in this case
** in this function, we try to create a new element(which is also a t_list)
** it includes the content in the input with initialized next(NULL)
** return the new element (the struct t_list new)
*/
