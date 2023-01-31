/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:45:18 by ade-orma          #+#    #+#             */
/*   Updated: 2023/01/18 17:17:49 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	bzero
*	A esta funcion le llega un string y el numero de bytes que queremos
*	selecionar. La funcion se ocupa de poner ceros desde el inicio del
*	string hasta el valor nBytes que le hayamos pasado.
*/

#include "libft.h"

void	ft_bzero(void *str, size_t nBytes)
{
	ft_memset(str, 0, nBytes);
}
