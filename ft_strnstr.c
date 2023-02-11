/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:26:37 by ade-orma          #+#    #+#             */
/*   Updated: 2023/02/11 17:42:11 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	
*	strnstr
*	Busca una subcadena dentro de una cadera
*	Si se da el caso, se retorna la primera posicion donde sucede
*	En caso de no encontrar nada, se devuelve NULL
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t nBytes)
{
	size_t	i;

	i = 0;
	if (!ft_strlen(needle))
		return ((char *) haystack);
	while (haystack[i] != '\0' && i + ft_strlen(needle) <= nBytes)
	{
		if (!ft_strncmp((haystack + i), needle, ft_strlen(needle)))
			return ((char *) haystack + i);
		i++;
	}
	return (NULL);
}
