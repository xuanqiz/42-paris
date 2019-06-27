#include <stdio.h>
#include <string.h>
//unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
char *ft_strcat(char *dest, char *src);

int main()
{
	char dest[100] = "dest";
	char dest2[100] = "dest";
	char *src = "1234";
	printf("Acutal size:   %s\n", ft_strcat(dest, src));
	printf("Expected size: %s\n", strcat(dest2, src));
	printf("Actual dest:   %s\n", dest);
	printf("Expected dest: %s\n", dest2);
}
