/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:28:22 by ade-orma          #+#    #+#             */
/*   Updated: 2023/02/11 17:22:47 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* ft_strncmp
* Function that compares two strings and returns the difference of the
* subtraction between the value of the subtraction s1[i] - s2[2] in the first
* `nBytes`.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t nBytes)
{
	if (nBytes == 0)
		return (0);
	while (--nBytes && *s1 && *s2)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}	
