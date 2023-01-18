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