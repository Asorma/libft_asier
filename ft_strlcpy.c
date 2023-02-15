/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:50:20 by ade-orma          #+#    #+#             */
/*   Updated: 2023/01/14 13:31:21 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* ft_strlcpy
* Function that copies `nBytes` of the string `from` and puts them into `to`,
* adding the null character at the end. This null character prevents code
* injection.
*/

#include "libft.h"

size_t	ft_strlcpy(char *to, const char *from, size_t nBytes)
{
	size_t	i;

	i = 0;
	if (nBytes == 0)
	{
		while (from[i])
			i++;
		return (i);
	}
	while (i < nBytes - 1 && from[i] != '\0')
	{
		to[i] = from[i];
		i++;
	}
	if (i < nBytes)
		to[i] = '\0';
	while (from[i] != '\0')
		i++;
	return (i);
}
