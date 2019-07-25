#include <unistd.h>


int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int main()
{
char i;
i = '0';
while (i <= '9')
{
ft_putchar(i);
i = i + 1;
}
return (0);
}
