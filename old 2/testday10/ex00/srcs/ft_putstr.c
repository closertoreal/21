void	ft_putchar(char c);

void	ft_putstr(char *str)
{
		int k;

			k = 0;
				while (str[k] != '\0')
						{
									ft_putchar(str[k]);
											k++;
												}
}
