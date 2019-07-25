/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskiles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 19:22:05 by mskiles           #+#    #+#             */
/*   Updated: 2018/11/04 04:36:53 by mskiles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./header/ft_list.h"


int		main(void)
{
    int     fd;
    int     chunk;
    char    buf[30001];


//    chunk = 1;
//    while (chunk > 0)
//    {
        chunk = read(0, buf, 30000);
        buf[chunk + 1] = '\0';
        colee_2(buf);
		rush04(ft_check_row(buf), ft_check_column(buf));
	
//	printf("%d", ft_check_column(buf));
//	ft_putstr(buf);
//    }
	return (0);
}
