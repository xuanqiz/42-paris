/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 17:33:39 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/17 16:40:13 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h> /*free, malloc*/
#include <unistd.h> /*read*/
# define BUFFER_SIZE 128

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

char	*ft_strjoin(char *cache, char *buf, size_t size)
{
	size_t	len;
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len = ft_strlen(cache) + size;
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (0);
	while (cache && cache[i])
	{
		str[i] = cache[i];
		i++;
	}
	while (buf && buf[j])
	{
		str[i] = buf[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(const char *cache, unsigned int start, size_t len)
{
	char *str;
	char *cpy_str;
	char *ptr;

	if (!cache || !(str = (char*)malloc(sizeof(char) * len + 1)))
		return (0);
	if (start >= ft_strlen(cache))
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

	if (!(str = (char *)malloc(sizeof(char))))
		return (0);
	str[0] = '\0';
	return (str);
}

static int		ft_delmem(char **cache, int ret) /*mention static in the same .c*/
{
	if (*cache)
	{
		free(*cache);
		*cache = 0;
	}
	return (ret);
}

static int		ft_output(char **line, char **cache, int index) /*index must be int here*/
/*because we could get it from ft_findn_index, it return -1, -1 is out of range for size_t*/
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
		tmp = 0;
		ret = 0;
	}
	ft_delmem(cache, 0);
	*cache = tmp;
	return (ret);
}

int				get_next_line(int fd, char **line)
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
➜  get_next_line git:(master) cat get_next_line_utils.c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 19:46:38 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/17 16:31:26 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

char	*ft_strjoin(char *cache, char *buf, size_t size)
{
	size_t	len;
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len = ft_strlen(cache) + size;
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (0);
	while (cache && cache[i])
	{
		str[i] = cache[i];
		i++;
	}
	while (buf && buf[j])
	{
		str[i] = buf[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(const char *cache, unsigned int start, size_t len)
{
	char *str;
	char *cpy_str;
	char *ptr;

	if (!cache || !(str = (char*)malloc(sizeof(char) * len + 1)))
		return (0);
	if (start >= ft_strlen(cache))
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

	if (!(str = (char *)malloc(sizeof(char))))
		return (0);
	str[0] = '\0';
	return (str);
}

