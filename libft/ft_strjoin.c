/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 20:00:34 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/13 16:43:16 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strjoin(char const *s1, char const *s2)
{
	char			*d;
	size_t			i;
	size_t			len;

	len = ft_strlen(s1) + ft_strlen(s2);
	d = (char *)malloc(sizeof(char) * len + 1);
	if (!d)
		return (NULL);
	i = 0;
	d = (char *)ft_memcpy(d, s1, ft_strlen(s1));
	while (i < ft_strlen(s2))
	{
		d[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	d[len] = '\0';
	return (d);
}