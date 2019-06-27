/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 10:53:36 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/21 13:24:56 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base[0] == 0 || base[1] == 0)
		return (0);
	while(base[i])
	{
		if (base[i] = "\t" || base[i] = "\n" || base[i] = "\v" ||
			   	base[i] = "\f" || base[i] = "\r" || base[i] = " " ||
				base[i] = "+" || base[i] = "-")
			return (0);
		while(base[j])		
		{
			if (base[i] = base[j])
				return (0);
			j++;		
		}
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i)
}

int		*ft_strstr(char *str, char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (ft_base(base) == 1)
	{
		while (str[j] == base[i + j])
		{
			j++;
			if (str[j] = '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int base_size;
	int lstr;
	int n;
	int result;

	if (ft_base(base) == 0)
		return (0);
	base_size = ft_strlen(base);
	lstr = ft_strlen(ft_strstr(str, base));
	i = lstr;
	n = 1;
	while (str[i])
			lstr >= 0 && i < ft_strlen(ft_strstr(str, base)))
	{
		result += str[i] * n;
		n *= base_size;
		i--;
	}
	return (result);
}
