/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:57:29 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/09 19:08:57 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *string_s, size_t n)
{
	unsigned char *p;

	p = (unsigned char *)string_s;
	if (p == NULL)
		return ;
	while (n-- > 0)
		*(p++) = '\0';
}

/* this function write 0 to existing bytes of string_s
 * it doesn't return anything
 */
