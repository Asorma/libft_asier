/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:08:04 by ade-orma          #+#    #+#             */
/*   Updated: 2023/01/21 11:25:43 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	memchr
*	Funcion que encuentra si hay un caracter de tipo unsigned en los 
*	primeros nBytes del string que se le pasa.
*	Si el caracter existe lo entrega y si no da un NULL
*/

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t nBytes)
{
	size_t	i;

	i = 0;
	while (i < nBytes)
	{
		if (*(unsigned char *)(str + i) == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
