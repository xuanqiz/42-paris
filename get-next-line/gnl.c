#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_realloc(char *s1, char *s2)
{
	char *new;
	int i;
	int j;

	i = 0;
	j = 0;
	if (!(new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	free(s1);
	s1 = NULL;
	return (new);
}

int put_char(char **line, char *buf)
{
	int ret;

	ret = read(0, buf, 1);
	buf[1] = '\0';
	if (ret == 0)
		return (0);
	if (buf[0] == '\n')
		return (1);
	*line = ft_realloc(*line, buf);
	return (2);
}

int gnl(char **line)
{
	int ret;
	char buf[2];

	if (!line || !(*line = (char *)malloc(sizeof(char) * 1)))
		return (-1);
	*line[0] = '\0';
	if ((ret = read(0, buf, 1)) < 0)
		return (-1);
	buf[1] = '\0';
	if (ret == 0)
		return (0);
	if (buf[0] == '\n')
		return (1);
	*line = ft_realloc(*line, buf);
	while ((ret = put_char(line, buf)) == 2)
		;
	return (ret);
}

int main()
{
	char **line;
	int ret;

	while ((ret = gnl(line)) >= 0)
	{
		printf("%2d--%s\n", ret, *line);
		free(*line);
		if (ret == 0)
			return (0);
	}
	return (0);
}
