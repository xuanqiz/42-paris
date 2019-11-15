/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 17:33:39 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/15 21:31:08 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

int		ft_output(char **line, char **cache, size_t index)
{
	char	*tmp;
	int		ret;

	if (index >= 0)
	{
		if (!(*line = ft_substr(*cache, 0, index)))
			return (ft_delmem(cache, -1));
		if (!(tmp = ft_substr(*cache, index + 1,
								ft_strlen(*cache) - index - 1)))
			return (ft_delmem(cache, -1));
		ret = 1;
	}
	else
	{
		if (!(*line = ft_substr(*cache, 0, ft_strlen(*cache))))
			return (ft_delmem(cache, -1));
		tmp = NULL;
		ret = 0;
	}
	ft_delmem(cache, 0);
	*cache = tmp;
	return (ret);
}

int		get_next_line(int fd, char **line)
{
	char		buf[BUFFER_SIZE + 1];
	int			file_read;
	static char	*cache;
	char		*tmp;

	if (!line || fd < 0 || BUFFER_SIZE < 1)
		return (ft_delmem(&cache, -1));
	while ((file_read = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[file_read] = '\0';
		if (!(tmp = ft_strjoin(cache, buf, file_read)))
			return (ft_delmem(&cache, -1));
		ft_delmem(&cache, 0);
		cache = tmp;
		if (ft_findn_index(cache) != -1)
			break ;
	}
	if (file_read < 0)
		return (ft_delmem(&cache, -1));
	if (file_read == 0 && (!cache || *cache == '\0')
				&& (*line = ft_strzero()))
		return (ft_delmem(&cache, 0));
	return (ft_output(line, &cache, ft_findn_index(cache)));
}
