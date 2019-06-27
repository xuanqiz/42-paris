#include <stdlib.h>
#include "ft_stock_str.h"

int                    ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char                *ft_strdup(char *src)
{
	char    *dest;
	int        len;

	len = ft_strlen(src) + 1;
	dest = malloc(sizeof(char) * len);
	len = 0;
	if (dest == NULL)
		return (0);
	else
	{
		while (len < ft_strlen(src))
		{
			dest[len] = src[len];
			len++;
		}
		dest[len] = '\0';
		return (dest);
	}
}

struct    s_stock_str    *ft_strs_to_tab(int ac, char **av)
{
	int            i;
	t_stock_str    *sortie;

	i = 0;
	if (ac < 0)
		return (0);
	sortie = (t_stock_str*)malloc(sizeof(t_stock_str) * ac + 1);
	if (sortie == NULL)
		return (NULL);
	sortie[i].copy = ft_strdup(av[i]);
	while (i < ac)
	{
		sortie[i].size = ft_strlen(av[i]);
		sortie[i].str = av[i];
		sortie[i].copy = ft_strdup(av[i]);
		i++;
	}
	sortie[i].str = NULL;
	return (sortie);
}
