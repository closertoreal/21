#include <unistd.h>
#include <stdio.h>

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
				if ((i == 1 && j == 1) || (i == y && j == x))
					putchar('A');
				else if ((i == 1 && j == x) || (i == y && j == 1))
					putchar('C');
				else if (i == 1 || i == y || j == 1 || j == x)
					putchar('B');
				else 
					putchar(' ');
			}
			putchar('\n');
		}
	}
	return(0);
	}
int main(void)
{
	int x, y;
	write(1, "enter length: \n", 14);
	scanf("%d", &x);
	write(1, "enter width: ", 14);
	scanf("%d", &y);
	rush(x,y);
}
