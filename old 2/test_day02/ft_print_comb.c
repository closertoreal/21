/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbennard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 22:42:25 by hbennard          #+#    #+#             */
/*   Updated: 2018/10/18 22:51:35 by hbennard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_print_comb(void)
{

	int first_char;
	int second_char;
	int third_char;
	
	first_char = 0;
	second_char = 1;
	third_char = 2;
while (first_char <= 7) 
{
	while (second_char <= 8)
	{
		while (third_char <= 9)
		{
			ft_putchar(first_char);
			ft_putchar(second_char);
			ft_putchar(third_char);
			third_char = third_char + 1;
		}
		second_char = second_char + 1;
	}
	first_char = first_char + 1;
}
