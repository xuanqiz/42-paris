/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 12:36:39 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/22 12:50:32 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		size;

	i = 0;
	size = max - min;
	if (min - max >= 0)
	{
		*range = NULL;
		return (0);
	}
	if (!(*range = (int *)malloc(sizeof(**range) * size)))
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}
