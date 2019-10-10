typedef	struct	s_point
{
	int x;
	int y;
}			    t_point;

int main(void)
{
	t_point a;
	t_point b;
	t_point	*ptr;

	a.x = 10;
	a.y = 42;
	b = a;
	ptr = &a;
	ptr ->x = 10;
	return (0);
