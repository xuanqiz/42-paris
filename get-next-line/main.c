#include <stdio.h>

int main()
{
	int ret;
	char **line;

	ret = get_next_line(0, line);
	printf("%d\n", ret);
	while ((ret = get_next_line(0, line)) >= 0)
	{
		printf("%2d--%s\n", ret, *line);
		free(*line);
		if (ret == 0)
			return (0);
	}
	return (0);
}
