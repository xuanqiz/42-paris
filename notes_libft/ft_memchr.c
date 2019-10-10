/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:11:51 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/09 21:25:28 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	size_t			i;

	i = 0;
	string = (unsigned char *)s;
	while (i++ < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)ptr[i]); /*not sure*/
	}
	return (NULL);
}

/* this function firstly test whether there is a predefined c existing in the string
 * if it is, then it stops and just return this byte
 * if not, it return null*/

