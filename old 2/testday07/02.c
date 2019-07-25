/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbennard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 18:30:53 by hbennard          #+#    #+#             */
/*   Updated: 2018/10/25 18:49:42 by hbennard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int i;
    int size;
    int *range;
    
    if (min >= max)
    {
        return (0);
    }
    i = 1;
    size = max - min;
    range = malloc(sizeof(int) * size);
    range[0] = min;
    while (i < size)
    {
        range[i] = range[i - 1] + 1;
        i = i + 1;
    }
    range[i] = '\0';
    return (size);
}
int main()
{
    ft_range(5, 9);
    return (0);
}
