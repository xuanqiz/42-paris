/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 19:46:09 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/17 16:40:44 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 128
# endif

size_t	ft_strlen(const char *cache);
char	*ft_strjoin(char *cache, char *buf, size_t size);
int		ft_findn_index(char *cache);
char	*ft_strzero();
char	*ft_substr(const char *cache, unsigned int start, size_t len);
int		get_next_line(int fd, char **line);

#endif

/*
** notice that the defination of buffersize is a subdefine in this document
** pay attention to the indentation
** for static funcion, we don't have to write them into h file
*/
