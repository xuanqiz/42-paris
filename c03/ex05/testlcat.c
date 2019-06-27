#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int		main()
{
	char str[100] = "dest";
	char str2[100] = "dest";
	char *src = "abc";
	printf("Acutal size:   %u\n", ft_strlcat(str, src, 3));
	printf("Expected size: %lu\n", strlcat(str2, src, 3));
	//printf("Actual dest:   %s\n", str);
	//printf("Expected dest: %s\n", str2);
}
