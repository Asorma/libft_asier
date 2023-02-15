/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 21:50:06 by ade-orma          #+#    #+#             */
/*   Updated: 2022/12/12 10:15:34 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * tolower
 * This function checks whether the alphabetic character is uppercase, and if so,
 * converts it to lowercase.
 */

#include "libft.h"

int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (i + 32);
	return (i);
}
