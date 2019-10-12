/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:08:11 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/12 18:28:11 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *string_b, int value_c, size_t len)
{
	unsigned char	*b;
	unsigned char	c;

	if (string_b == NULL)
		return (NULL);
	b = (unsigned char *)string_b;
	c = (unsigned char)value_c;
	while (len-- > 0)
		*(b++) = c;
	return (string_b);
}

/*
** libft.h contains required string.h
** the loop here means:
** if the input still exist
** we write value_c to replace the orinigal ones in the string_b.
** we use b, because b is the same as string_b
** but already switched to the type unsigned char.
** the function returns its first argument
** which is the void string_b thought the written function has been done
** we don't return it.
** b = (unsigned char *)string_b;
** ()means to change the type of string_b from void to unsigned char
*/
