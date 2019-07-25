/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbennard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 19:00:23 by hbennard          #+#    #+#             */
/*   Updated: 2018/10/24 19:04:03 by hbennard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

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

int main(void)
    {
        char *str;
        str = "sdfadfsf";
        printf("%d", ft_strlen(str));
        ft_strlen(str);
        return(0);
    }

/*
 Norme: ./ft_putchar.c
 Norme: ./ft_strlen.c
 Warning: /Users/hbennard/day06/ex00/ft_strlen.c may not compile or is invalid for some reasons.
 Norme: ./ft_swap.c
 Error (line 13): multiple empty lines
 Error (line 14): bad spacing before ft_swap
 Error (line 14): declarations must be followed by one empty line in ft_swap
 Norme: ./ft_putstr.c
 
 */
