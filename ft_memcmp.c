/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:26:01 by ade-orma          #+#    #+#             */
/*   Updated: 2023/01/21 11:37:44 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	memcmp
*	Function that compares two strings based on their ASCII values in the first nBytes from zero.
*	If the values are the same for each byte, it returns 0.
*	If they are different, it returns the difference between the ASCII values (str1 - str2).
*	It's important to treat everything as unsigned to avoid unequal values even when the byte has the same value.
*/

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t nBytes)
{
	const unsigned char	*c_str1;
	const unsigned char	*c_str2;
	size_t				i;

	i = 0;
	c_str1 = (const unsigned char *)str1;
	c_str2 = (const unsigned char *)str2;
	while (i < nBytes)
	{
		if (c_str1[i] != c_str2[i])
			return (c_str1[i] - c_str2[i]);
		i++;
	}
	return (0);
}
