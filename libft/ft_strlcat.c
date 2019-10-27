/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 14:20:47 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/27 19:16:13 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	s1_end;

	i = 0;
	while (dest[i] && i < size)
		i++;
	s1_end = i;
	if (size == 0)
		return (s1_end + ft_strlen(src));
	while (src[i - s1_end] && i < size - 1)
	{
		dest[i] = src[i - s1_end];
		i++;
	}
	if (s1_end < size)
		dest[i] = '\0';
	return (s1_end + ft_strlen(src));
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
