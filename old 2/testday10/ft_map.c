/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbennard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:08:04 by hbennard          #+#    #+#             */
/*   Updated: 2018/10/30 15:13:28 by hbennard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*result;

	i = 0;
	result = (int*)malloc(sizeof(int) * length);
	while (tab[i] < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}
/Users/hbennard/Downloads/42us-stupidity-master/day10/ex02/ft_map.c
