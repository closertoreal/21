/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskiles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 16:31:55 by mskiles           #+#    #+#             */
/*   Updated: 2018/11/04 03:09:15 by mskiles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_list.h"

char	*rush02(int x, int y)
{
	char	*line;
	int		size;
	int		i;
	
	size = (x + 1) * y + 1;
	line = malloc(sizeof(char) * size);
	i = -1;
	while (size > ++i)
		line[i] = '\0';
	if (y == 1)
		line = add_to_line(line, x, 'A', 'B', 'A');
	else if (y > 0)
	{
		line = add_to_line(line, x, 'A', 'B', 'A');
		while (y > 2)
		{
			line = add_to_line(line, x, 'B', ' ', 'B');
			y--;
		}
		line = add_to_line(line, x, 'C', 'B', 'C');
	}
	printf("%s", line);
	return (line);
}
