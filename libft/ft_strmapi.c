/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 20:20:43 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/17 17:20:14 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
** this function is a function of function =.=
** char (*f)(uunsigned int, char)) is a function, the input is a number and char
** f can be any function, such as ft_putstr or ft_tolower
** then, the result varies with f
** the only difference between this one and the old ones:
** instead of writing str[i] = s[i], we deal with the function and write it as
** str[i] = (*f)(i, s[i])
*/
