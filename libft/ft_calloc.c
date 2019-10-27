/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 20:50:35 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/27 19:28:08 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*str;

	total = count * size;
	str = malloc(total);
	if (str != 0)
		ft_memset(str, 0, size);
	return (str);
}

/*
** malloc only assigns a space together
** calloc check "object" (int, char etc) first and then * size
** and also write 0 to all of it
*/
