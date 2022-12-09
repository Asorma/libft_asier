/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:19:25 by ade-orma          #+#    #+#             */
/*   Updated: 2022/12/08 18:19:53 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*Searches the first ocurrence of a char on a string
*If found, returns the position and if not returns null
*/

#include "libft.h"

char	*strchr(const char *str, int c)
{
	while (*str && *str != (unsigned char)c)
		str++;
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}
