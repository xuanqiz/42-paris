/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:04:07 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/16 17:54:02 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 128
# endif

typedef struct		s_gnl
{
	char			*content;
	struct s_gnl	*next;
	int				fd;
}					t_gnl;

size_t				ft_strlen(const char *cache);
char				*ft_strjoin(char *cache, char *buf);
int					ft_findn_index(char *cache);
char				*ft_strzero();
char				*ft_substr(const char *cache, size_t start, size_t len);
int					get_next_line(int fd, char **line);
int					ft_delist(t_gnl **start, int fd);
t_gnl				*ft_newlist(int fd);
t_gnl				*ft_findlist(t_gnl **start, int fd);
int					ft_output(char **line, t_gnl **start, int idx, int fd);

#endif

/*
** the indentation of function should be placed in form with struct
*/
