/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 21:50:06 by ade-orma          #+#    #+#             */
/*   Updated: 2022/12/06 21:53:18 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * toupper
 * This function checks whether the alphabetic character is lowercase and
 * converts it to uppercase.
 */

#include "libft.h"

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		return (i - 32);
	return (i);
}
