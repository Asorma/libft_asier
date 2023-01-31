/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:07:48 by ade-orma          #+#    #+#             */
/*   Updated: 2022/12/01 04:26:10 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	isalpha
*	Funcion para chequear si el valor que se le pasa es alfabetico
*/

#include "libft.h"

int	ft_isalpha(int i)
{
	if (('a' <= i && 'z' >= i) || ('A' <= i && 'Z' >= i))
		return (1);
	return (0);
}
