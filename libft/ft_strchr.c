/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 22:20:00 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/09 22:32:35 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char*)s);
		s++;
	}
	if (c == '\0')  /*????*/
		return ((char*)s);
	return (0);
}

/* this function aim to find a predefined c in the string:
** if it exist, return the pointer of this byte 
**(if the predefined c is the ending null, we should return it);
** if not, return 0
*/

