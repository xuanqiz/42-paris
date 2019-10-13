/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 18:04:02 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/13 14:11:03 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && C <= 'Z'));
}

/*
** if c is a alpha character, it returns itself;
** for ft_issomething series, their tasks is to make a judgement
** either it return 0(false) or 1(true)
** it is equivalent to write like this:
** if ((c >= 'a' && c <= 'z') || (c >= 'A' && C <= 'Z'))
**		return (1);
** else
**		return (0);
** for any combinations of > < = != && ||, the value always be either 0 or 1
*/
