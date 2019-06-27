#include <stdio.h>
#include <string.h>
//unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
//char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char dest[100] = "dest";
	char dest2[100] = "dest";
	char *src = "1234";
	printf("Acutal size:   %s\n", ft_strncat(dest, src, 10));
	printf("Expected size: %s\n", strncat(dest2, src, 10));
	printf("Actual dest:   %s\n", dest);
	printf("Expected dest: %s\n", dest2);
}
