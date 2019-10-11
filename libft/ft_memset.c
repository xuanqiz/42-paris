/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:08:11 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/09 19:23:39 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* libft.h contains required string.h*/

void	*ft_memset(void *string_b, int value_c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)string_b; /* ()means to change the type of string_b from void to unsigned char */
	if (p == NULL)
		return (NULL);
	while (len-- > 0)
		*(p++) = (unsigned char)value_c;
	return (string_b)
}

/* the loop here means:
 * if the input still exist, we write value_c to replace the orinigal ones in the string_b.
 * we use p, because p is the same as string_b but already switched to the type unsigned char. 
 * the function returns its first argument, which is the void string_b thought the written function has been done, we don't return it.
 */

