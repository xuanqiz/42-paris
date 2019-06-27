/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 19:57:12 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/15 21:21:03 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned	int i;

	i = 0;
	while (i < n)
	{
		while (s1[i] == s2[i] && s1[i] && s2[i])
			i++;
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == 0 || s2[i] == 0)
			return (0);
	}
	return (0);
}
