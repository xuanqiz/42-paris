#include <stdio.h>

int		ft_atoi(char *str);

int		main()
{
		char str[100] = "\t\n\v\f\r -42";
		printf("%d", ft_atoi(str));
}
