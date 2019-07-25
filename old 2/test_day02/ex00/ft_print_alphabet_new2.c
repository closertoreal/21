Pwd/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet_new.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbennard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 17:48:40 by hbennard          #+#    #+#             */
/*   Updated: 2018/10/18 20:23:51 by hbennard         ###   ########.fr       */
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
	i = 'a';
	while (i <= 'z')
	{
		ft_putchar(i);
		i = i + 1;
	}
	return (0);
}
