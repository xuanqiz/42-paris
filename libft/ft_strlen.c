/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 22:08:50 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/12 18:35:50 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
** compare to the ft_strlen that we write in piscine
** this one is more precise
** 1, we use const char to say that we will read string only
** 2, the type is size_t, similiar to unsigned int (not fully understood)
*/
