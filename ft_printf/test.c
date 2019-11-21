
#include <stdio.h>
/*
int printf(const char *format, ...)
*/

#include <stdlib.h>

/*
int main(int ac,char **av)
{
	(void)ac;
	printf("%d\n%x\n%X\n%o\n%s\n", atoi(av[1]), atoi(av[2]), atoi(av[3]), atoi(av[4]), av[5]);
	return(0);
}

*/

/* d stands for decimal(10), 
 * x for hexidecimal(16) with minuscule, X with majuscule,
 * o for octal(8)
 * s for string,
 * c for character
 * p
 * i
 * u unsigned int
*/

/*
int main(void)
{
	printf("%%d\n");
	printf("\\\n");
	printf("\"\"\n");
	return(0);
}
*/

/*
 * to print %d, %s, %o.... add another % avant
 * to print \, add another \ avant
 * to print ", add \ avant
 */

/*
int main(int ac, char**av)
{
	(void)ac;
	printf("%d\n", printf("%d\n", printf ("%s\n", av[1])));
	return (0);
}

 * what is the return value of printf, it is how many characters have been printed
 */

int main(int ac, char**av)
{
	(void)ac;
	printf("%+9.7d\n",atoi(av[1]));
	printf("%s\n", "flag = -, width = 9, precision = 7 setting = %+9.7");
	return(0);
}

/*
 * %[flags][width][.precision][length]specifier
 * dxXoscpiu... are all specifiers
 * -+ 0# are flags
 * + will make +or- become visiable, it doesn't take place of precision
 * width/precision/length all are optional
 */
