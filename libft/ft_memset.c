/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:08:11 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/09 19:32:22 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *string_b, int value_c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)string_b;
	if (p == NULL)
		return (NULL);
	while (len-- > 0)
		*(p++) = (unsigned char)value_c;
	return (string_b);
}
