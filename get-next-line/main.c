#include <stdio.h> 
#include "get_next_line.h" 
#include <sys/types.h> 
#include <sys/stat.h> 
#include <fcntl.h> 

int main(int ac, char **av) 
{ 
    int ret; 
    int fd; 
    char *line; 

    fd = open(av[1], O_RDONLY); 
    while ((ret = get_next_line(fd, &line)) > 0) 
    { 
        puts(line); 
        free(line); 
    } 
    puts(line); 
    free(line); 
    for (;;); /*create infinite loop to check leaks*/
    return (0); 
} 
