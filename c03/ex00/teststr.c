#include <stdio.h>
#include <string.h>
//unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
int		ft_strcmp(char *s1, char *s2);

int main()
{
	char s1[100] = "dest";
	char s2[100] = "dest1";
	//char *src = "1234";
	printf("Acutal size:   %u\n", ft_strcmp(s1, s2));
	printf("Expected size: %lu\n", strcmp(s1, s2));
	printf("Actual dest:   %s\n", s1);
	printf("Expected dest: %s\n", s2);
}
