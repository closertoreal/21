/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbennard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 21:03:42 by hbennard          #+#    #+#             */
/*   Updated: 2018/10/20 21:08:53 by hbennard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>


int	ft_sqrt(int nb)
{
	int test;
	int result;
    int i;
	
	result = 0;
	i = 2;
	if (nb <= 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		test = i * i;
		if (test == nb)
		{
			result = i;
			return (result);
		}
		i = i + 1;
	}
	return (result);
}

int    main(void)
{
    int nb;
    scanf("%d",&nb);
    printf("%d", ft_sqrt(nb));
    return (0);
    
}
