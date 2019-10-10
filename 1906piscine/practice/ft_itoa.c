/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 22:20:13 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/27 22:21:56 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nbr)
{
	int sign;
	long n;

	n = nbr;
	sign = 1;
	if (nbr < 0)
	{
		n *= -1;
		sign = -1;
	}
	if (nbr >= 10)
		nbr = nbr / 10;
		ft_putnbr(nbr % 10 + '0');
	if (nbr < 10)
		ft_putchar(nbr % 10 + '0');
}

int	ft_strlen(*str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_itoa(int nbr)
{
	long number;
	int i;
	int ls;

	number = nbr;
	if (!(str = malloc(sizeof(char) * (ft_strlen(ft_putnbr(nbr))) + 1))
			return (0);
	
	
}
 

