/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:07:48 by ade-orma          #+#    #+#             */
/*   Updated: 2022/12/01 04:27:33 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	
*	isascii
*	Funcion para chequear si el valor entrante pertenece al ASCII
*/

#include "libft.h"

int	ft_isascii(int i)
{
	if (0 <= i && 127 >= i)
		return (1);
	return (0);
}
