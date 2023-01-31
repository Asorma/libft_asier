/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:19:25 by ade-orma          #+#    #+#             */
/*   Updated: 2023/01/18 18:27:55 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	strchr
*	Funcion que busca un caracter que le indicamos en un string que 
*	le pasamos. Si lo encuentra, la funcion devuelve la posicion del caracter,
*	si no, pues nos devuelve un NULL
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str && *str != (unsigned char)c)
	{
		str++;
	}
	if ((char)c == *str)
	{
		return ((char *)str);
	}
	return (NULL);
}
