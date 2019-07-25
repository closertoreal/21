/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbennard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 21:34:15 by hbennard          #+#    #+#             */
/*   Updated: 2018/10/20 21:38:43 by hbennard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;
	
    if (nb == 0 || nb == 1)
	{
		return (0);
	}
	i = 2;
	while (i <= nb)
	{
		if (nb % i == 0 && nb != i)
		{
			return (0);
		}
        i = i + 1;
        }
	return (1);
}
int    main(void)
{
    int nb;
    scanf("%d",&nb);
    printf("%d", ft_is_prime(nb));
    return (0);
    
}
