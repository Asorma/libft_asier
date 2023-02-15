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
*	Function that searches for an unsigned character in the first nBytes of the string passed to it.
*	If the character is found, it returns a pointer to it; if not, it returns NULL.
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
