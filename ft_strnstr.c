/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:26:37 by ade-orma          #+#    #+#             */
/*   Updated: 2022/12/09 12:29:02 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Busca una subcadena dentro de una cadera
//Si se da el caso, se retorna la primera posicion donde sucede
//En caso de no encontrar nada, se devuelve NULL

char	strnstr(const char *strref, const char *strbusq, size_t len)
{
	size_t	i;
	int		length;
	char	*large;
	char	*small;

	if (*strbusq == '\0')
		return ((char *)strref);
	large = (char *)strref;
	small = (char *)strbusq;
	i = 0;
	length = ft_strlen(small);
	while (large[i] != '\0' && (i + length) <= len)
	{
		if (ft_strncmp((large + i), small, length) == 0)
		{
			return (large + i);
		}
		i++;
	}
	return (NULL);
}
