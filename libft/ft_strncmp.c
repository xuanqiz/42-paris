/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 18:36:38 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/27 19:11:09 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (*(unsigned char *)&s1[i] - *(unsigned char *)&s2[i]);
		i++;
	}
	if (i < n && ((s1[i] != '\0' && s2[i] == '\0')
			|| (s1[i] == '\0' && s2[i] != '\0')))
		return (*(unsigned char *)&s1[i] - *(unsigned char *)&s2[i]);
	return (0);
}

/*
** first time I triedd with return (s1[i] - s2[2])
** then it doesn't handle the non-ascii characters
** then I know I need to specify (unsigned char *) for s1 and s2
** it works with *(unsigned char *)&s1[i]
*/
