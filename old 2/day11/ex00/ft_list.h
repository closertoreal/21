/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbennard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 19:10:19 by hbennard          #+#    #+#             */
/*   Updated: 2018/10/31 19:49:52 by hbennard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __list_h__
#define __list_h__

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list		*add_link(t_list *list, char *str);

t_list		*ft_create_elem(void *data);

#endif
