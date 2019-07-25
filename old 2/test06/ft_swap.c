#include <stdio.h>
#include <unistd.h>

void    ft_swap(int *a, int *b)
{
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}

int main(void)
{
    int x, y;
    int *a, *b;
    x = 1;
    y = 2;
    a = &x;
    b = &y;
    printf("%d\n", x);
    printf("%d\n", y);
    ft_swap(a, b);
    printf("%d\n", x);
    printf("%d\n", y);
}


 

 

