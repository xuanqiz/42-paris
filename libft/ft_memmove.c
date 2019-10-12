/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:09:10 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/09 21:13:56 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*p_dst;
	unsigned char			*p_src;
	size_t						i;

	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	i = 0;
	if (p_src < p_dst)
		while (i++ < len)
			p_dst[len - i - 1] = p_src[len - i - 1];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

/* this function handles situation that the dst might take the space of src
** In this case, we need to copy the information from the end to the begining. 
** Otherwise, when we start to copy the overlapping part from src
** (where dst begins), it has already replaced by the begining of src.
** other details in this script:
** if we use ++i in the while, then we take [len - i]
*/
