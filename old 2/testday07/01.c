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
    size = max - min + 2;
    range = malloc(sizeof(int) * size);
    range[0] = min;
    while (i < size - 1)
    {
        range[i] = range[i - 1] + 1;
        i = i + 1;
    }
    range[i] = '\0';
    return (range);
}
int main()
{
    int min;
    int max;
    min = 5;
    max = 25;
    printf("%d", ft_range(5, 9));
    return (0);
}
