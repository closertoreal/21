/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskiles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 03:12:04 by mskiles           #+#    #+#             */
/*   Updated: 2018/11/04 03:13:18 by mskiles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_list.h"

void	print_line(int x, char first, char middle, char end)
{
	if (x > 0)
	{
		if (x == 1)
			ft_putchar(first);
		else if (x > 1)
		{
			ft_putchar(first);
			while (x > 2)
			{
				ft_putchar(middle);
				x--;
			}
			ft_putchar(end);
		}
		ft_putchar('\n');
	}
}
