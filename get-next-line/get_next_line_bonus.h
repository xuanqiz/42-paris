/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:04:07 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/16 16:05:48 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 128

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *cache);
char	*ft_strjoin(char *cache, char *buf, size_t size);
int		ft_findn_index(char *cache);
char	*ft_strzero();
char	*ft_substr(const char *cache, size_t start, size_t len);
int		get_next_line(int fd, char **line);

#endif
