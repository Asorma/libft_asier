/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:07:32 by ade-orma          #+#    #+#             */
/*   Updated: 2023/01/18 17:20:59 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	memset
*	Function that writes a specific value `c` to the memory location pointed
*	to by `str`, `nBytes` number of times.
*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t nBytes)
{
	size_t	i;

	i = 0;
	while (i < nBytes)
	{
		((char *)str)[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
