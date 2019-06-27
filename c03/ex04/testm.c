#include <stdio.h>
#include <string.h>
//unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
//char *ft_strcat(char *dest, char *src);
//char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strstr(char *str, char *to_find);

int main(int argc, char **argv)
{
	//char str[100] = "";
	//char str2[100] = "dest";
	//char *to_find = "abc";
	printf("Acutal size:   %s\n", ft_strstr(argv[1], argv[3]));
	printf("Expected size: %s\n", strstr(argv[2], argv[3]));
	printf("Actual dest:   %s\n", argv[1]);
	printf("Expected dest: %s\n", argv[2]);
}
