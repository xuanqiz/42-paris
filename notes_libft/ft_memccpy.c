/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 19:35:00 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/09 20:08:33 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char *p_dst;
	unsigned char *p_src;

	p_dst = (unsigned char*)dst;
	p_src = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		p_dst[i] = p_src[i];
		if (p_src[i] == (unsigned char)c)
			return (p_dst + i + 1);
		i++;
	}
	return (NULL);
}

/* the difference between memccpy and memcpy are:
 * 1, add new condition - if a pre-defined value c exists in the src, the copy stops
 * 2, return different values depends on the condition:
 * condition fulfilled - stop copy and return dst after the copy
 * condition not match - copy predefined n and return NULL
 *
 * this function we need to define an extra value i, in order to locate n
 * ?? again, what is overlapping thing and what is undefined behavior??
