#include <unistd.h>
#define TOTO(x) #x;

int	main(void)
{
	char *str;

	str = TOTO(a);
	write(1, str, 1);
	return (0);
}
