/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 19:18:43 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/12 19:26:03 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(*s, fd);
	ft_putchar_fd("\n", 1);
}

/*
** the other way:
**	write (fd, s, ft_strlen(s);
**	write (1, "\n", 1);
** what is the difference between *s, s (char*)s
*/
