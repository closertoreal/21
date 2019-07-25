int	ft_check_row(char *s)
{
	int i;
	int row;
	
	i = 0;
	row = 0;
	
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
		{
			row++;
		}
		i++;
	}
	return (row);
}
