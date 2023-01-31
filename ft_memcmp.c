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
*	Funcion que compara 2 string en sus valores ASCII en nBytes desde cero
*	Si son iguales en cada uno de los bytes se devuelve 0
*	Si son distintos se devuelve la resta del valor ASCII (str1 - str2)
*	Importante el poner todo en unsigned para evitar valores desiguales aun
*	cuando el byte tenga el mismo valor
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
