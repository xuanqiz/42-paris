/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 17:33:39 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/09 17:44:23 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
	char buf[BUFFER_SIZE - BUFFER_SIZE + 2];
	int	ret;
	
	if ( fd < -1 || !line || 
		!(line = malloc(sizeof(char) + 1)))
		return (-1);
	
	return (0);


}

/*
** 
