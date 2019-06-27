/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:06:14 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/22 12:49:55 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strcpy(char *src, char *dest)
{
	int i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_size_strs(int size, char **strs)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (i < size)
	{
		nb = nb + ft_strlen(strs[i]);
		i++;
	}
	return (nb);
}

char	*ft_empty_mois(int size, char *result)
{
	if (size == 0)
	{
		result = malloc(sizeof(*result));
		result[0] = '\0';
		return (result);
	}
	else if (size < 0)
		return (0);
	return (0);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*result;

	i = -1;
	j = 0;
	result = NULL;
	if (size <= 0)
		return (ft_empty_mois(size, result));
	result = (char*)malloc(sizeof(*result) * (ft_strlen(sep) * (size - 1)
				+ ft_size_strs(size, strs) + 1));
	while (++i < size - 1)
	{
		ft_strcpy(strs[i], result + j);
		j = j + ft_strlen(strs[i]);
		ft_strcpy(sep, result + j);
		j = j + ft_strlen(sep);
	}
	ft_strcpy(strs[i], result + j);
	j = ft_strlen(strs[i]) + j + 1;
	result[j] = '\0';
	return (result);
}
