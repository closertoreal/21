/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskiles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 16:26:49 by mskiles           #+#    #+#             */
/*   Updated: 2018/11/04 03:08:00 by mskiles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_list.h"

char	*rush00(int x, int y)
{
	char	*line;
	int		size;
	int		i;
	
	size = (x + 1) * y + 1;
	line = (char*)malloc(sizeof(char) * size);
	i = -1;
	while (size > ++i)
		line[i] = '\0';
	if (y == 1)
		line = add_to_line(line, x, 'o', '-', 'o');
	else if (y > 0)
	{
		line = add_to_line(line, x, 'o', '-', 'o');
		while (y > 2)
		{
			line = add_to_line(line, x, '|', ' ', '|');
			y--;
		}
		line = add_to_line(line, x, 'o', '-', 'o');
	}
	printf("%s", line);
	return (line);
}
