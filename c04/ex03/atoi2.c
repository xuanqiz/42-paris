int ft_atio2(char *str)
{
	int i = 0;
	int result[20];
	int n;
	while (str[i])
	{
		result[i] = (int)(str[i] - '0');
		i++;
	}
	while (i > 0)
	{
		//printf("%i\n", result[i]);
		//while (x > 0)
		//n = n + result[i] * x;
		//x /= 10;
		i--;
	}
	return n * signe;
}
