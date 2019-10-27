/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 20:16:59 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/27 20:09:44 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && len-- >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}

/*
** refer to c03 ft_strstr, we try to find needle in haystack,
** but in this case, we won't search for all of them.
** we only search a predefined length(len).
** the first while loop goes over haystack,
** the inner while loop to check whether there are characters FULLY
** match needle, not just partly
** if we find a fully matched, we return a pointer
** which points to the first byte of needle in haystack
*/
