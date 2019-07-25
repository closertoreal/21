/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbennard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 21:47:17 by hbennard          #+#    #+#             */
/*   Updated: 2018/10/28 21:49:52 by hbennard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	while (!(*s1) && *s2 == '*')
		++s2;
	if (*s1 == *s2)
		match(++s1, ++s2);
	if (!(*s1) && !(*s2))
		return (1);
	if (*s1 && *s2 == '*')
		return (match(++s1, s2) || match(s1, ++s2));
	return (0);
}
