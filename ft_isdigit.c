/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:07:48 by ade-orma          #+#    #+#             */
/*   Updated: 2022/12/01 04:27:59 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	isdigit
*	Funcion que comprueba si el valor pertenece al sistema decimal
*/

#include "libft.h"

int	ft_isdigit(int i)
{
	if ('0' <= i && '9' >= i)
		return (1);
	return (0);
}
