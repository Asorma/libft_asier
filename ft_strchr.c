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
*Searches the first ocurrence of a char on a string
*If found, returns the position and if not returns null
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
