#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h> /*for va_list*/
#include <stdio.h>

typedef struct s_ptf
{
	va_list ap;
	int i;
	int len;
	int width;
	int precision;
	int precision_width;
	int precision_parsing;
	int ret;
}		t_ptf;

void init_ptf(t_ptf *ptf)
{
	ptf->len = 0;
	ptf->width = 0;
	ptf->precision = 0;
	ptf->precision_width = 0;
	ptf->precision_parsing = 0;
}

int is_conv(char c)
{
	if (c == 's' || c == 'x' || c == 'd')
		return (1);
	else
		return (0);
}

int ft_atoi(char *s, t_ptf *ptf)
{
	int res;

	res = 0;
	while (is_digit(s[ptf->i]))
	{
		res = res * 10 + s[ptf->i] - 48;
		ptf->i++;
	}
	ptf->i--;
	return (res);
}

void print_spaces(t_ptf *ptf, int len)
{
	int i;

	i = 0;
	if (len < 0)
		return;
	while (i < len)
	{
		ft_putchar(' ');
		i++;
	}
	ptf->ret = ptf->ret + len;
}

void parse (char *str, t_ptf *ptf)
{
	ptf->i++;
	init_ptf(ptf);
	while (!is_conv(str[ptf->i]))
	{
		if (is_digit(str[ptf->i]))
		{
			if(ptf->precision_parsing)
				ptf->precision_width = ft_atoi(str, ptf);
			else
				ptf->width = ft_atoi(str, ptf);
		}



}


}

int ft_printf(const char *str, ...)
{
	t_ptf ptf;

	ptf.i = 0;
	ptf.ret = 0;
	va_start(ptf.ap, str);
	while (str[ptf.i])
	{
		if(str[ptf.i] == '%')
			parse((char*)str, &ptf);
		else
		{
			ft_putchar(str[ptf.i]);
			ptf.ret++;
		}
		ptf.i++;
	}
	va_end(ptf.ap);
	return(ptf.ret);
}
