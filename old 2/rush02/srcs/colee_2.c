/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colee_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskiles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 03:23:05 by mskiles           #+#    #+#             */
/*   Updated: 2018/11/04 04:18:46 by mskiles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_list.h"

int		allowed(char c)
{
	if (c == 'o' || c == '-' || c == '|' || c == ' ' || c == '/' || c == '*'
			|| c == '\\' || c == 'A' || c == 'B' || c == 'C' || c == '\n')
		return (0);
	return (1);
}

int		is_valid(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (allowed(s[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}

void	colee_2(char *s)
{

	if (is_valid(s) == 1)
		ft_putstr("aucune\n");
    else
        ft_putstr("OK");
}

