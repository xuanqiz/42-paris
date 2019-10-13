/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 14:20:47 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/13 17:03:51 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize || dstsize == 0)
		return (ft_strlen(src) + dstsize);
	i = 0;
	while (i < (dstsize - ft_strlen(dst) - 1) && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dstsize] = '\0';
	return (dst_len + ft_strlen(src));
}

/*
** add src to the end of dst, for most dstsize(predefined) - strlen(dst) - 1
** the last "1" is reserved to add '\0'
** if dstsize = 0 or ft_strlen(dst) > dstsize
** then "return the total length of the string they tried to create" means:
** ft_strlen(src) + dstsize
** how it happens?
** for example, dst = [student] src [of42], the dstsize should ba at least 7
** otherwise, it cannot create the new phrase,
** because the space is not enough
*/
