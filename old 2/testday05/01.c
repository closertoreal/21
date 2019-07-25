/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbennard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:41:51 by hbennard          #+#    #+#             */
/*   Updated: 2018/10/22 14:42:01 by hbennard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void ft_putchar (char c)
{
    write(1, &c, 1);
}

void ft_putnbr (int nb)
{
    int swap;
    
    swap = nb;
    
    if (swap < 0)
    {
        ft_putchar('-');
        swap = -swap;
    }
    if (swap / 10 != 0)
    {
        ft_putnbr(swap / 10);
    }
    ft_putchar(swap % 10 + 48);
}

int main()
{
    int d;
    scanf("%d", &d);
    ft_putnbr(d);
    return (0);
}
