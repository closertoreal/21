/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskiles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 19:25:07 by mskiles           #+#    #+#             */
/*   Updated: 2018/11/04 03:22:15 by mskiles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdio.h>
//# include <sys/types.h>
//# include <sys/stat.h>
//# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

void		colee_2(char *s);
void		ft_putchar(char c);
void		ft_putstr(char *s);
char		*rush00(int x, int y);
char		*rush01(int x, int y);
char		*rush02(int x, int y);
char		*rush03(int x, int y);
char		*rush04(int x, int y);
int			ft_atoi(char *str);
void		print_line(int x, char first, char middle, char end);
int		ft_check_row(char *s);
int		ft_check_column(char *s);
char	*add_to_line(char *line, int x, char first, char middle, char end);


#endif
