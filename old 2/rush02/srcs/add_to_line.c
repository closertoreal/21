/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskiles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:31:30 by mskiles           #+#    #+#             */
/*   Updated: 2018/11/04 17:13:56 by mskiles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_list.h"

char	*add_to_line(char *line, int x, char first, char middle, char end)
{
	int i;
	
	i = 0;
	while (line[i])
		i++;
	if (x > 0)
	{
		if (x == 1)
			line[i++] = first;
		else if (x > 1)
		{
			line[i++] = first;
			while (x > 2)
			{
				line[i++] = middle;
				x--;
			}
			line[i++] = end;
		}
		line[i] = '\n';
	}
	return (line);
}
