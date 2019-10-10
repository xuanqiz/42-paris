/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d07main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabotie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 17:05:03 by asabotie          #+#    #+#             */
/*   Updated: 2019/06/22 12:49:20 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_strjoin(int size, char **strs, char *sep);

void str_comp(char *str1, char *str2)
{
	int res;

	if (str1 && str2)
		res = strcmp(str1, str2);
	else if (str1 == NULL && str2 == NULL)
		res = 0;
	else
		res = 1;
	if (res)
	{
		printf("\033[1;31mKO\033[0m\n");
		printf("should be: \"%s\"\n", str1);
		printf("......was: \"%s\"\n", str2);
	}
	else
		printf("\033[1;32mOK\033[0m result was %s\n", str2);

}

void int_comp(int nb1, int nb2)
{
	if (nb1 != nb2)
	{
		printf("\033[1;31mKO\033[0m\n");
		printf("should be: \"%d\"\n", nb1);
		printf("......was: \"%d\"\n", nb2);
	}
	else
		printf("\033[1;32mOK\033[0m\n");
}


void ptr_comp(void *nb1, void *nb2, int equal)
{
	if ((nb1 != nb2 && equal) || (nb1 == nb2 && !equal))
	{
		printf("\033[1;31mKO\033[0m\n");
		printf("should be: \"%p\"\n", nb1);
		printf("......was: \"%p\"\n", nb2);
	}
	else
		printf("\033[1;32mOK\033[0m\n");
}


void test_ft_range(int min, int max)
{
	int	*array = ft_range(min, max);
	
	printf("ptr: %p min %d max %d:\n", array, min, max);
	if (array)
	{
		int i = 0;
		while (min + i < max)
		{
			printf("%d ", array[i]);
			i++;
		}
	}
}

void test_ft_ultimate_range(int min, int max)
{
	int *array;
	int ret = ft_ultimate_range(&array, min, max);
	printf("ptr: %p min %d max %d return value %d :\n", array, min, max, ret);
	if (array)
	{
		int i = 0;
		while (min + i < max)
		{
			printf("%d ", array[i]);
			i++;
		}
	}
}

void	test_ft_strjoin(int size, char **strs, char *sep)
{
	char *res = ft_strjoin(size, strs, sep);
	printf("ptr: '%p' size: '%d' sep: '%s' strs: ", res, size, sep);
	if (size > 0)
	{
		int i = 0;
		while (i < size)
		{
			printf("'%s'", strs[i]);
			if (i < size - 1)
				printf("-");
			i++;
		}
		printf("\n");
		printf("%s\n", res);
	}
	free(res);
}

int	main(void)
{
	char *str1;
	char *str2;
	printf("\n###### EX00 ######\n");

	printf("\nTEST_00\n");
	str1 = "Hello";
	str2 = ft_strdup(str1);
	str_comp(strdup("Hello"), str2);
	ptr_comp(str1, str2, 0);

	printf("\n###### EX01 ######\n");

	printf("\nTEST_00\n");
	test_ft_range(-10, 2);

	printf("\nTEST_01\n");
	test_ft_range(0, 2);

	printf("\nTEST_02\n");
	test_ft_range(1, 2);

	printf("\nTEST_03\n");
	test_ft_range(2, 2);
	
	printf("\n###### EX02 ######\n");

	printf("\nTEST_00\n");
	test_ft_ultimate_range(-10, 2);

	printf("\nTEST_01\n");
	test_ft_ultimate_range(0, 2);

	printf("\nTEST_02\n");
	test_ft_ultimate_range(1, 2);

	printf("\nTEST_03\n");
	test_ft_ultimate_range(2, 2);
	
	printf("\n###### EX03 ######\n");

	printf("\nTEST_00\n");
	char *strs0[3];
	strs0[0] = "Hello";
	strs0[1] = "World";
	strs0[2] = "!";
	test_ft_strjoin(3, strs0, " ");

	printf("\nTEST_01\n");
	char *strs1[3];
	strs1[0] = "Hello";
	strs1[1] = "World";
	strs1[2] = "!";
	test_ft_strjoin(3, strs1, "_this_is_a_space_");

	printf("\nTEST_02\n");
	char *strs2[0];
	test_ft_strjoin(0, strs2, " ");

	printf("\nTEST_03\n");
	char *strs3[1];
	strs3[0] = "Hello";
	test_ft_strjoin(1, strs3, " ");

	printf("\nTEST_04\n");
	char *strs4[0];
	test_ft_strjoin(-3, strs4, " ");

	printf("\nTEST_05\n");
	char *strs5[3];
	strs5[0] = "Hello";
	strs5[1] = "";
	strs5[2] = "!";
	test_ft_strjoin(3, strs5, "");

	printf("\nTEST_06\n");
	char *strs6[3];
	strs6[0] = "";
	strs6[1] = "";
	strs6[2] = "";
	test_ft_strjoin(3, strs6, "");
}	
