/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:45:18 by ade-orma          #+#    #+#             */
/*   Updated: 2023/02/19 16:26:37 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	bzero
*	This function takes a string and the number of bytes we want to select.
*	The function sets the values of the bytes in the string to zero from the
*	beginning of the string up to the value of nBytes that we passed to it.
*/

#include "libft.h"

void	ft_bzero(void *str, size_t nBytes)
{
	ft_memset(str, 0, nBytes);
}
