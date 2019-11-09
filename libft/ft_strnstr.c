/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 20:16:59 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/08 21:17:58 by xzhao            ###   ########.fr       */
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
** ft_strncmp -- compare two strings less than n characters
** if the difference == 0, which means they match each other
** not just partly but a fully match, we return a pointer
** which points to the first byte of needle in haystack
*/
