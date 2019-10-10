/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 22:22:28 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/27 22:50:44 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int *range;
	int i;
	int ls;

	ls = end - start + 1;
	if(!(range = malloc(sizeof(*range) * ls)))
		return (0);
	i = 0;
	while (start <= end && i < ls)
	{	
		range[i] = start;
		start++;
		i++;
	}
	while (start > end && i < ls)
	{
		range[i] = end;
		end++;
		i++;
	}
	return (range);
}

#include <stdio.h>
int		main(int ac, char **av)
{
	int *range;
	int i;
	int length;

	range = NULL;
	length = 0;
	(void)ac;
	range = ft_range(atoi(av[1]), atoi(av[2]));
	length = atoi(av[2]) - atoi(av[1]) + 1;
	i = 0;
	while (i < length)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
