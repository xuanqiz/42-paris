/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:34:45 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/11 14:16:22 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;

	if (s == NULL)
		return (NULL);
	if (!(str = (char *)malloc(len + 1)))
		return (NULL);
	i = 0;
	while (i < len && *(s + start + i) && start < ft_strlen(s))
	{
		*(str + i) = *(s + start + i);
		i++;
	}
	*(str + i) = '\0';
	return (str);
}

/*
** write a new string, which takes part from the inital one *s
** it begins with the s[start], and last for 'len' long
** to protect the function, check whether s is null
*/
