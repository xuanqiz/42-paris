#include "ft_stock_str.h"
#include <stdio.h>


struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

int main()
{
	char *a = "foo123";
	char *b = "bar";
	char *c = "baz";
	char *strs[] = {a, b, c};
	struct s_stock_str *mambo;

	printf ("--- Case: 3 normal strings ---\n");	
	mambo = ft_strs_to_tab(3, strs);
	for (int i = 0; i < 4; i++)
	{
		printf("#%d, size = %d, str = %s, copy = %s\n", i, mambo[i].size, mambo[i].str, mambo[i].copy); 
	}
	printf("--- Running showtab, copy[1] is now x --- \n");
	mambo[2].copy[1] = 'x';
	ft_show_tab(mambo);
	
	char *a2 = "";
	char *b2 = "";
	char *c2 = "";
	char *strs2[] = {a2, b2, c2};

	printf ("--- Case: 3 empty strings ---\n");	
	mambo = ft_strs_to_tab(3, strs2);
	for (int i = 0; i < 4; i++)
	{
		printf("#%d, size = %d, str = %s, copy = %s\n", i, mambo[i].size, mambo[i].str, mambo[i].copy); 
	}
	printf("--- Running showtab --- \n");
	ft_show_tab(mambo);
	
	char *a3 = "abc\0OVERFLOW";
	char *b3 = "def\0OVERFLOW";
	char *c3 = "ghi\0OVERFLOW";
	char *strs3[] = {a3, b3, c3};

	printf ("--- Case: 3 strings with overflow ---\n");	
	mambo = ft_strs_to_tab(3, strs3);
	for (int i = 0; i < 4; i++)
	{
		printf("#%d, size = %d, str = %s, copy = %s\n", i, mambo[i].size, mambo[i].str, mambo[i].copy); 
	}

	printf("--- Running showtab --- \n");
	ft_show_tab(mambo);
	
	char *strs4[0];

	printf ("--- Case: empty array on input ---\n");	
	mambo = ft_strs_to_tab(0, strs3);
	for (int i = 0; i < 4; i++)
	{
		printf("#%d, size = %d, str = %s, copy = %s\n", i, mambo[i].size, mambo[i].str, mambo[i].copy); 
	}
	printf("--- Running showtab --- \n");
	ft_show_tab(mambo);
	

}
