/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbennard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 18:30:53 by hbennard          #+#    #+#             */
/*   Updated: 2018/10/20 19:30:55 by hbennard         ###   ########.fr       */
/*                                                                            */
/* ****************5********************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
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
	while (i <= power)
	{
		result = nb * result;
		i = i + 1;
	}
	return (result);
}
int    main(void)
{
    int nb;
	int power;
    scanf("%d",&nb);
    scanf("%d", &power);
    printf("%d", ft_iterative_power(nb, power));
    return (0);
    
}
