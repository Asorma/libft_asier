/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:37:38 by ade-orma          #+#    #+#             */
/*   Updated: 2023/01/21 11:44:45 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	calloc
*	Misma funcionalidad que la funcion malloc, pero poniendo ceros para
*	borrar la basura que puede haber en la memoria reservada.
*	Util cuando no quieres que tu programa lea por error datos que no debe
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
