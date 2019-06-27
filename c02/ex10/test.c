#include <stdio.h>
#include <string.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char dest[100] = "dest";
	char dest2[100] = "dest";
	char *src = "1234";
	printf("Acutal size:   %u\n", ft_strlcpy(dest, src, 0));
	printf("Expected size: %lu\n", strlcpy(dest2, src, 0));
	printf("Actual dest:   %s\n", dest);
	printf("Expected dest: %s\n", dest2);
}
