/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 20:00:34 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/17 17:21:08 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	size_t			i;
	size_t			len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	str = (char *)ft_memcpy(str, s1, ft_strlen(s1));
	while (i < ft_strlen(s2))
	{
		str[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	str[len] = '\0';
	return (str);
}

/*
** copy s1(as prefix) amd then s2(as suffix) to a new string char *str
** if we don't use ft_memcpy, we can write another while loop
** i = 0;j = 0;
** while (i < ft_strlen(s1)) {
**		str[i] = s1[i]; i++;}
** while (i >= ft_strlen(s1) && i < len) {
**		str[i] = s2[j]; i++;}
** str[len] = '0'; return(str);
*/
