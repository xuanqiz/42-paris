/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:01:41 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/16 17:52:38 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *cache)
{
	size_t	i;

	if (!cache)
		return (0);
	i = 0;
	while (cache[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *cache, char *buf)
{
	size_t	len;
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len = ft_strlen(cache) + ft_strlen(buf);
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (0);
	while (cache && cache[i])
	{
		str[i] = cache[i];
		i++;
	}
	if (cache)
		free(cache);
	while (buf && buf[j])
	{
		str[i] = buf[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(const char *cache, size_t start, size_t len)
{
	char *str;
	char *cpy_str;
	char *ptr;

	if (!cache || !(str = (char*)malloc(sizeof(char) * len + 1)))
		return (0);
	if (ft_strlen(cache) <= start)
		str[0] = '\0';
	else
	{
		ptr = (char*)cache + start;
		cpy_str = str;
		while (*ptr != '\0' && len-- > 0)
			*cpy_str++ = *ptr++;
		*cpy_str = '\0';
	}
	return (str);
}

int		ft_findn_index(char *cache)
{
	int	i;

	i = 0;
	while (cache[i] != '\0')
	{
		if (cache[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strzero(void)
{
	char *str;

	if (!(str = (char *)malloc(sizeof(char) * 1)))
		return (0);
	str[0] = '\0';
	return (str);
}

/*
** this one is completely the same as get_next_line_utils.c
** except the include &  header
*/
