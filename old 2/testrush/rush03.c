#include <stdio.h>
#include <unistd.h>

int rush(int x, int y)
{
	int i, j;
	i = 0;
	if (x > 0 && y > 0)
	{
		while (++i <= y)
		{
			j = 0;
			while (++j <= x)
			{
				if (j == 1 && (i == 1 || i == y))
						putchar('A');
				else if (j == x && (i == 1 || i == y))
					putchar('C');
				else if (i == 1 || j == 1 || i == y || j == x)
					putchar('B');
				else
					putchar(' ');
			}
			putchar('\n');
		}
	}
return (0);
}

	int main(void)
	{
		int x,y;
		write(1, "enter length: \n", 14);
		scanf("%d", &x);
		write(1, "enter width: ", 14);
		scanf("%d", &y);
		rush(x,y);
	}
