/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 19:46:09 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/15 19:54:42 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 128

# include <stdlib.h>
# include <unistd.h>

int		ft_delmem(char **cache, int ret);
size_t	ft_strlen(const char *cache);
char	*ft_strjoin(char *cache, char *buf, size_t size);
int		ft_findn_index(char *cache);
char	*ft_strzero();
char	*ft_substr(const char *cache, size_t start, size_t len);
int		ft_final(char **line, char **cache, size_t index);
int		get_next_line(int fd, char **line);

#endif
