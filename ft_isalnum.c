/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:07:48 by ade-orma          #+#    #+#             */
/*   Updated: 2022/12/06 12:03:56 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	isalnum
*	Comprueba si el valor enviado es alfanumerico
*/

#include "libft.h"

int	ft_isalnum(int i)
{
	if (ft_isalpha(i) == 1 || ft_isdigit(i) == 1)
		return (1);
	return (0);
}
