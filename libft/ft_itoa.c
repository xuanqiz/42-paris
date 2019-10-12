#inlcude "libft.h"

void	ft_putnbr(int n)
{
	int sign;
	long nbr;

	nbr = n;
	sign = 1;
	if (n < 0)
	{
		nbr *= -1;
		sign = -1;
	}
	if (n >= 10)
		n = n / 10;
		ft_putnbr(n % 10 + '0');
	if (nbr < 10)
		ft_putchar(n % 10 + '0');
}

int	ft_strlen(*str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	long number;
	int i;
	int ls;

	number = n;
	if (!(str = malloc(sizeof(char) * (ft_strlen(ft_putnbr(n))) + 1))
			return (0);
}
