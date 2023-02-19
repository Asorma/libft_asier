/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:07:48 by ade-orma          #+#    #+#             */
/*   Updated: 2023/02/19 16:28:50 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	isdigit
*	Function that checks if the value belongs to the decimal system.
*/

#include "libft.h"

int	ft_isdigit(int i)
{
	if ('0' <= i && '9' >= i)
		return (1);
	return (0);
}
