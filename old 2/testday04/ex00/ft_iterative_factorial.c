/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbennard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 16:54:47 by hbennard          #+#    #+#             */
/*   Updated: 2018/10/20 18:58:33 by hbennard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (i <= nb)
	{
		result = i * result;
		i = i + 1;
	}
	return (result);
}

int    main(void)
{
    int d;
    scanf("%d", &d);
    //  ft_iterative_factorial(d);
    printf("%d", ft_iterative_factorial(d));
    return (0);
    
}
