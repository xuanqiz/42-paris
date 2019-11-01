/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 22:13:12 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/01 11:43:12 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	if (dst == NULL || src == NULL)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (--dstsize && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*
** this function copies from src to dst for (size -1) of dest
** it returns the length of the string that it copied (=src)
** details:
** it starts with --dstsize, so that we can write dest[i] = 0
** because we reserved one byte for Null-termination
** the i is calculated in the loop but not written src[i]
** to protect the function, check whether dst/src is null!!!
*/
