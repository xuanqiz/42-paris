/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 11:15:36 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/18 18:32:14 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char s)
{
	write(1, &s, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int n;

	n = 0;
	while (s1[n] == s2[n] && s1[n] && s2[n])
		n++;
	return (s1[n] - s2[n]);
}

void	ft_sort_params(int argc, char **argv)
{
	int			t;
	char		*pro;

	t = 0;
	while (t < argc - 1)
	{
		if (ft_strcmp(argv[t], argv[t + 1]) > 0)
		{
			pro = argv[t];
			argv[t] = argv[t + 1];
			argv[t + 1] = pro;
			if (t > 0)
				t = t - 2;
		}
		t++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	ft_sort_params(argc - 1, argv + 1);
	while (i <= argc - 1)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
