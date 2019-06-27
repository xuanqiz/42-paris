#include <stdio.h>

int ft_is_prime(int nb);

int		main()
{
	printf("%d\n",ft_is_prime(-2));
	printf("%d\n",ft_is_prime(-456));
	printf("%d\n",ft_is_prime(0));
	printf("%d\n",ft_is_prime(1));
	printf("%d\n",ft_is_prime(2));
	printf("%d\n",ft_is_prime(997));
	printf("%d\n",ft_is_prime(7933));
	printf("%d\n",ft_is_prime(104759));
	printf("%d\n",ft_is_prime(1299743));
	printf("%d\n",ft_is_prime(7368811));
	printf("%d\n",ft_is_prime(12345678));
}
