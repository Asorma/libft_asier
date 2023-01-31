/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:28:22 by ade-orma          #+#    #+#             */
/*   Updated: 2022/12/12 10:28:32 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	strncmp
*	Funcion que compara 2 strings y devuelve la diferencia de la
*	resta entre el valor de la resta s1[i] - s2[2] en los primeros nBytes
*/


#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t nBytes)
{
	if (nBytes == 0)
		return (0);
	while (--nBytes && *s1 && *s2)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}	
