/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:19:25 by ade-orma          #+#    #+#             */
/*   Updated: 2023/01/18 18:27:55 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	ft_strchr
*	Function that searches for a character `c` in the string `str`. If it is
*	found, the function returns a pointer to the location of the character.
*	If not, the function returns NULL.
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str && *str != (unsigned char)c)
	{
		str++;
	}
	if ((char)c == *str)
	{
		return ((char *)str);
	}
	return (NULL);
}
