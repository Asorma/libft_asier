/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:35:21 by ade-orma          #+#    #+#             */
/*   Updated: 2023/01/18 18:26:14 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	memcpy
*	Funcion que copia los primeros nBytes del
*	string denominado from al string to.
*/

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t nBytes)
{
	char	*c_from;
	char	*c_to;

	c_from = (char *)from;
	c_to = (char *)to;
	if (!to && !from)
		return (to);
	while (nBytes--)
	{
		*c_to++ = *c_from++;
	}
	return (to);
}
