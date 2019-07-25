/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbennard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 16:39:20 by hbennard          #+#    #+#             */
/*   Updated: 2018/10/23 18:17:45 by hbennard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int        ft_atoi(char *str)
{
    int        index;
    int        result;
    
    index = 0;
    result = 0;
    while (str[index] != '\0')
    {
        if ((char)(str[index]) >= 48 && (char)(str[index]) <= 57)
        {
            result = result * 10 + (char)(str[index] - 48);
            index = index + 1;
        }
        else if ((char)(str[index] == 45))
        {
            result = result
        else if ((char)(str[index]) == '/t' || (char)(str[index]) == '/r'
                 || (char)(str[index]) == '/n' || (char)(str[index]) == '/v'
                 || (char)(str[index]) == '/f' || (char)(str[index]) == '+'
                  || (char)(str[index]) == ' ')
        {
            index = index + 1;
        }
    }
    return (result);
}
int main()
{
    char *str;
    str = "                 -987";
    ft_atoi(str);
    printf("%d", ft_atoi(str));
    printf("\n");
    printf("%d", atoi(str));
    return (0);
}














