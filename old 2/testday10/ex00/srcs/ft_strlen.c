/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbennard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 19:00:23 by hbennard          #+#    #+#             */
/*   Updated: 2018/10/24 19:14:20 by hbennard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int index;
	int result;

	result = 0;
	index = 0;
	while (str[index] != '\0')
	{
		result = result + 1;
		index = index + 1;
	}
	return (result);
}
