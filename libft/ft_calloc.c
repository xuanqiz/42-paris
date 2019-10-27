/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 20:50:35 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/27 20:38:37 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*str;
	size_t	i;

	total = count * size;
	if (!(str = malloc(total)))
		return (0);
	i = 0;
	while (i < total)
	{
		((char *)str)[i] = 0;
		i++;
	}
	return (str);
}

/*
** malloc only assigns a space together
** calloc check "object" (int, char etc) first and then * size
** and also write 0 to all of it
*/
