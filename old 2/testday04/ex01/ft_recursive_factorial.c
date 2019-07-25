/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbennard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 17:46:51 by hbennard          #+#    #+#             */
/*   Updated: 2018/10/20 18:49:16 by hbennard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int i;
	int result;

	result = 1;
	if (nb == 1)
	{
		return (result);
	}
	else
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}

int	main(void)
{
    int d;
    scanf("%d", &d);
  //  ft_recursive_factorial(d);
    printf("%d", ft_recursive_factorial(d));
				return (0);

}
