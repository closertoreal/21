int	ft_check_column(char *s)
{
	int i;
	
	
	i = 0;
	
	
	while (s[i] != '\n')
	{
	i++;
	}
	return (i);
}
