/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 22:34:45 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/21 16:10:57 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		ls;
	char	*s1;

	i = 0;
	ls = 0;
	while (src[ls] != 0)
		ls++;
	if (!(s1 = (char*)malloc(sizeof(char) * ls + 1)))
		return (NULL);
	while (i < ls)
	{
		s1[i] = src[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
