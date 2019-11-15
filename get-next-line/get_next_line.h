#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdlib.h>

int	ft_delmem(char **cache, int ret);
size_t	ft_strlen(const char *cache);
char	*ft_strjoin(char *cache, char *buf, size_t size);
size_t	ft_findn_index(char *cache);
char	*ft_strzero();
char	*ft_substr(const char *cache, size_t start, size_t len);
int	ft_final(char **line, char **cache, size_t index);
int	get_next_line(int fd, char **line);

#endif
