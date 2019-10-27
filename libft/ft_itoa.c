/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:04:02 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/27 19:31:32 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_size(long n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	if (n == 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static	void	ft_trans(char *str, long nbr, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		str[size - i - 1] = nbr % 10 + '0';
		nbr = nbr / 10;
		i++;
	}
}

char			*ft_itoa(int n)
{
	char	*str;
	size_t	size;
	int		sign;
	long	nbr;

	nbr = n;
	sign = 1;
	size = ft_size(nbr);
	if (!(str = (char *)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	if (nbr < 0)
	{
		sign = -1;
		nbr *= -1;
	}
	ft_trans(str, nbr, size);
	if (sign == -1)
		str[0] = '-';
	str[size] = '\0';
	return (str);
}
