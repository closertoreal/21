/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbennard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:54:18 by hbennard          #+#    #+#             */
/*   Updated: 2018/10/25 15:34:56 by hbennard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
    int i;
    int j;
	int size;
	char *srccpy;
	
	size = 0;
	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		size = size + 1;
		i = i + 1;
	}
    size = size + 1;
srccpy = malloc(sizeof(char) * size);
   while (src[j] != '\0')
   {
	   srccpy[j] = src[j];
       j = j + 1;
   }
    srccpy[j] = '\0';
   return (srccpy);
}

int main()
{
    char *src;
    src = "wersdf";
    ft_strdup(src);
    printf("%s", ft_strdup(src));
    return (0);
}
