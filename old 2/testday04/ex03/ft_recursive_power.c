/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbennard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 19:44:00 by hbennard          #+#    #+#             */
/*   Updated: 2018/10/20 19:51:35 by hbennard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int i;
	int result;

	i = 2;
	result = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		result = 1;
		return (result);
	}
	if (power == 1)
	{
		return (result);
	}
	else
	{
		result = nb * ft_recursive_power(nb, power - 1);
	}
	return (result);
}

int    main(void)
{
    int nb;
    int power;
    scanf("%d",&nb);
    scanf("%d", &power);
    printf("%d", ft_recursive_power(nb, power));
    return (0);
    
}
