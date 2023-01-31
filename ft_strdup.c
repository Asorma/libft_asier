/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:46:09 by ade-orma          #+#    #+#             */
/*   Updated: 2023/01/21 12:16:34 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	strdup
*	Funcion que duplica una cadena de caracteres y nos devuelve el duplicado.
*/

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	int		i;
	int		length;
	char	*c_str1;

	i = 0;
	length = ft_strlen(str1) + 1;
	c_str1 = (char *)ft_calloc(length, 1);
	if (!str1 || !c_str1)
		return (NULL);
	while (str1[i])
	{
		c_str1[i] = str1[i];
		i++;
	}
	c_str1[i] = 0;
	return (c_str1);
}	
