/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 15:09:24 by srolland          #+#    #+#             */
/*   Updated: 2018/10/28 16:01:43 by srolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		fill_sudoku(char **puzzle, int row, int column);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	print_sudoku(char **puzzle)
{
	int		i;
	int		j;

	i = 1;
	while (puzzle[i])
	{
		j = 0;
		while (puzzle[i][j] != '\0')
		{
			ft_putchar(puzzle[i][j]);
			if (puzzle[i][j + 1] != '\0')
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		is_ok(char **ta, int rows)
{
	int		i;
	int		j;

	i = 1;
	if (rows != 10)
		return (0);
	while (i < rows)
	{
		j = 0;
		while (j < 9)
		{
			if (!(ta[i][j] >= '1' && ta[i][j] <= '9') && ta[i][j] != '.')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (is_ok(argv, argc))
	{
		if (fill_sudoku(argv, 1, 0))
			print_sudoku(argv);
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
	return (0);
}
