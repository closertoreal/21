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

char        *ft_concat_params(int argc, char **argv)
{
    char    *params;
    int        i;
    int        count;
    
    i = 0;
    count = argc * 2;
    
    params = malloc(sizeof(char) * argc * 2 - 1);
    while (count != 0)
    {
        if (count % 2 == 1)
        {
        params[i] = *argv[i];
            count = count - 1;
            i = i + 1;
        }
        else if (count % 2 != 1)
        {
            params[i] = '\n';
        count = count - 1;
        i = i + 1;
        }
    }
    return (params);
}

int main()
{
    int argc;
    char **argv;
    
    printf("%s", ft_concat_params(argc, argv));
    return (0);
    }
