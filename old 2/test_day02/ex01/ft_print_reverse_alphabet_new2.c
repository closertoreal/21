/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet_new.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbennard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 17:48:40 by hbennard          #+#    #+#             */
/*   Updated: 2018/10/18 18:45:56 by hbennard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_putchar(char c)
{
write(1, &c, 1);
return (0);
}

int	main()
{
	
int i;
	i = 'z';
	while (i >= 'a')
	{
		ft_putchar(i);
		i = i - 1;
	}
	return (0);
}