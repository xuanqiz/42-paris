/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:06:12 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/16 17:50:23 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int		ft_delist(t_gnl **start, int fd)
{
	t_gnl	*first;
	t_gnl	*curr;
	t_gnl	*next;

	first = *start;
	curr = first;
	while (curr)
	{
		next = curr->next;
		if (curr->fd == fd)
		{
			if (curr->content)
				free(curr->content);
			if (first != curr)
				first->next = next;
			else if (first == curr)
				*start = next;
			free(curr);
			break ;
		}
		first = curr;
		curr = curr->next;
	}
	return (1);
}

t_gnl	*ft_newlist(int fd)
{
	t_gnl	*c;

	if (!(c = (t_gnl*)malloc(sizeof(t_gnl))))
		return (0);
	c->fd = fd;
	c->content = 0;
	c->next = 0;
	return (c);
}

t_gnl	*ft_findlist(t_gnl **start, int fd)
{
	t_gnl	*tmp;
	t_gnl	*first;

	if (*start == 0)
	{
		*start = ft_newlist(fd);
		return (*start);
	}
	tmp = *start;
	first = 0;
	while (tmp)
	{
		if (tmp->fd == fd)
			return (tmp);
		first = tmp;
		tmp = tmp->next;
	}
	first->next = ft_newlist(fd);
	return (first->next);
}

int		ft_output(char **line, t_gnl **start, int idx, int fd)
{
	char	*s;
	int		ret;
	t_gnl	*c;

	c = ft_findlist(start, fd);
	s = c->content;
	if (idx >= 0)
	{
		*line = ft_substr(s, 0, idx);
		c->content = ft_substr(s, idx + 1, ft_strlen(s) - idx - 1);
		ret = 1;
		free(s);
	}
	else
	{
		*line = ft_substr(s, 0, ft_strlen(s));
		ft_delist(start, fd);
		ret = 0;
	}
	return (ret);
}

int		get_next_line(int fd, char **line)
{
	int				file_read;
	char			buff[BUFFER_SIZE + 1];
	static t_gnl	*start;
	t_gnl			*tmp;

	if (fd < 0 || !line || BUFFER_SIZE < 1)
		return (-1);
	tmp = ft_findlist(&start, fd);
	while ((file_read = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[file_read] = '\0';
		tmp->content = ft_strjoin(tmp->content, buff);
		if (ft_findn_index(tmp->content) != -1)
			break ;
	}
	if (file_read < 0 && !(*line = 0))
		return (-1);
	if (file_read == 0 && (!(tmp->content) || *(tmp->content) == '\0')
		&& (*line = ft_strzero()) && ft_delist(&start, fd))
		return (0);
	return (ft_output(line, &start, ft_findn_index(tmp->content), fd));
}
