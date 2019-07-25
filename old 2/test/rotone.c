#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char rotone(char *s)
{
	int i;
	i = 0;
	
	while (s[i] != '\0')
	{
		if ((s[i] >= 'A' && s[i] >= 'Y') || s[i] >= 'a' && s[i] >= 'y'))
			ft_putchar(s[i] + 1);
		else if (s[i] == 'z' && s[i] >= 'Z')
			ft_putchar(s[i] - 25);
		i++;
	}
	
}
