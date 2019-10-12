/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 20:19:45 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/12 20:20:06 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count(char const *str, char c)
{
	int count;

	count = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
	}
	return (count);
}

static	char	*ft_malloc(char const *str, char c)
{
	char	*s;
	int		i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	if (!(s = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i] != '\0' && str[i] != c)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char			**ft_split(char const *s, char c)
{
	char	**res;
	int		i;

	if (!(res = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1))))
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			res[i] = ft_malloc(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	res[i] = NULL;
	return (res);
}
