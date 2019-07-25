#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(int fd, char c)
{
	write(fd, &c, 1);
}



int	main()
{
int	fd;
fd = open("alph", O_RDONLY);
ft_putchar(fd);
return (0);
}
