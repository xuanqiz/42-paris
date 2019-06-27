/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 23:18:47 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/22 11:18:17 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	if (!(range = (int*)malloc(sizeof(*range) * size)))
		return (0);
	while (i < size)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
