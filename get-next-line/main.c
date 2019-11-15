#include <stdio.h>

int main()
{
	int ret;
	char **line;

	while ((ret = get_next_line(0, line)) >= 0)
	{
		printf("%2d--%s\n", ret, *line);
		free(*line);
		if (ret == 0)
			return (0);
	}
	return (0);
}
