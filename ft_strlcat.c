/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 23:00:50 by ade-orma          #+#    #+#             */
/*   Updated: 2022/12/06 23:02:36 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* ft_strlcat
* Function that concatenates the first `nBytes` of the string `from`
* onto the end of the string `to`.
*/

#include "libft.h"

size_t	ft_strlcat(char *to, const char *from, size_t nBytes)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (to[i] && i < nBytes)
		i++;
	while (from[j] && (i + j + 1) < nBytes)
	{
		to[i + j] = from[j];
		j++;
	}
	if (i < nBytes)
		to[i + j] = '\0';
	return (i + ft_strlen(from));
}
