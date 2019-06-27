#include <stdio.h>

int ft_find_next_prime(int nb);

int		main()
{
	printf("%d\n",ft_find_next_prime(104768));
	printf("%d\n",ft_find_next_prime(-456));
	printf("%d\n",ft_find_next_prime(0));
	printf("%d\n",ft_find_next_prime(1));
	printf("%d\n",ft_find_next_prime(2));
	printf("%d\n",ft_find_next_prime(52));
	printf("%d\n",ft_find_next_prime(1237));
	printf("%d\n",ft_find_next_prime(4567892));
	printf("%d\n",ft_find_next_prime(2147483647));
	printf("%d\n",ft_find_next_prime(1234567));
	printf("%d\n",ft_find_next_prime(45672));
}
