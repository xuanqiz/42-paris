/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 19:11:53 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/09 19:35:07 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p_dst;
	const unsigned char *p_src;

	p_dst = (unsigned char*)dst;
	p_src = (unsigned char*)src;
	while(n-->0)
		*(p_dst++) = *(p_src++);
	return(dst);
}

/* while source(src) is existing, we copy it to the destination(dst),
** but we return not the new dst, instead, the original one.
** this one only works when dst and src is not overlapping on each other,
** overlapping indicates their storage space.
** we take the value from src, but not write on it, so it is const,
** const means read only
** we need to write on dst, so it is not const.
*/

