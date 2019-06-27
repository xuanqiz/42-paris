#include <stdio.h>
#include <string.h>
//unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
//int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char s1[100] = "dest1fdfd";
	char s2[100] = "dest1456";
	//char *src = "1234";
	printf("Acutal size:   %u\n", ft_strncmp(s1, s2, 8));
	printf("Expected size: %d\n", strncmp(s1, s2, 8));
	//printf("Actual dest:   %s\n", s1);
	//printf("Expected dest: %s\n", s2);
}
