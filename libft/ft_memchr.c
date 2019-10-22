/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:11:51 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/22 21:18:45 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	size_t			i;

	string = (unsigned char *)s;
	i = 0;
	while (i++ < n)
	{
		if (string[i] == (unsigned char)c)
			return (string);
	}
	return (NULL);
}

/*
** this function firstly test whether there is a predefined c in the string
** if it is, then it stops and just return this byte
** if not, it return null
** ?? do I need to return( (void *)string[i])  - no!
*/
