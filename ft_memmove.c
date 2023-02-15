/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:50:11 by ade-orma          #+#    #+#             */
/*   Updated: 2023/01/18 18:14:37 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	memmove
*	Function that works the same way as memcpy, but with the difference that
*	in memcpy we overwrite dst forever. In this function, the data from `to`
*	is moved to another string, and then we overwrite the original `to` with
*	the data from `from`.
*/	

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t nBytes)
{
	char	*c_from;
	char	*c_to;

	c_from = (char *)from;
	c_to = (char *)to;
	if (c_from < c_to)
	{
		while (nBytes--)
			c_to[nBytes] = c_from[nBytes];
	}
	else
		ft_memcpy(c_to, c_from, nBytes);
	return (c_to);
}
