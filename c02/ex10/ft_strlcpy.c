/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 12:11:34 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/13 15:22:35 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_strlen(char *str)
{
	int l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && size > 1)
	{
		if (i < size - 1)
			dest[i] = src[i];
		else
			break ;
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
