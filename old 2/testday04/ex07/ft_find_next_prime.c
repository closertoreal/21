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

int    ft_find_next_prime(int nb)
{
    int i;
    int j;
        
    if (nb == 0 || nb == 1)
    {
        return (nb);
    }
    i = 2;
    j = 1;
    
    while (i <= nb)
    {
        if (nb % i == 0 && nb != i)
        {
            nb = nb + j;
            ft_find_next_prime(nb);
        }
    
        i = i + 1;
    }
    return (nb);
}
int    main(void)
{
    int nb;
    scanf("%d",&nb);
    printf("%d", ft_find_next_prime(nb));
    return (0);
    
}
