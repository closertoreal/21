#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char*str);
void	ft_strcmp(char *s1, char *s2);
void	ft_strlen(char *str);
void	ft_swap(int *a, int *b);

int		main()
{
    char c = 'a';
    char *str1;
    str1 = "asd";
    char *s1;
    s1 = "asf";
    char *s2;
    s2 = "sdf";
    char *str2;
    str2 = "sdf";
    int *a;
    int *b;
    int x;
    int y;
    x = 5;
    y = 6;
    a = &x;
    b = &y;
    
    ft_putchar(c);
    ft_putstr(str1);
    ft_strcmp(s1, s2);
    ft_strlen(str2);
    ft_swap(a, b);
	return (0);
}
