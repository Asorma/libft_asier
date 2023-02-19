/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:37:38 by ade-orma          #+#    #+#             */
/*   Updated: 2023/02/19 16:29:16 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	calloc
*	Same functionality as malloc, but setting the allocated memory to zero
*	to clear any garbage data that may exist in the memory.
*	Useful when you don't want your program to accidentally
*	read data that it shouldn't.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t nBytes)
{
	void	*pointer;

	pointer = malloc(count * nBytes);
	if (pointer == NULL)
		return (pointer);
	ft_bzero(pointer, nBytes * count);
	return (pointer);
}
