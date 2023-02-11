/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:50:20 by ade-orma          #+#    #+#             */
/*   Updated: 2023/01/14 13:31:21 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	strlcpy
*	Funcion que copia nBytes del string from y los pone en el to, añadiendo
*	el caracter null al final. Este null final evita inyeccion de codigo
*/	
#include "libft.h"

size_t	ft_strlcpy(char *to, const char *from, size_t nBytes)
{
	size_t	i;

	i = 0;
	if (nBytes == 0)
	{
		while (from[i])
			i++;
		return (i);
	}
	while (i < nBytes - 1 && from[i] != '\0')
	{
		to[i] = from[i];
		i++;
	}
	if (i < nBytes)
		to[i] = '\0';
	while (from[i] != '\0')
		i++;
	return (i);
}
