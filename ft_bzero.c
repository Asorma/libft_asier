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
*	Limpia los datos de un string desde el inicio hasta donde le indiquemos
*	a base de poner ceros.
*/

#include "libft.h"

void	ft_bzero(void *str, size_t s)
{
	size_t	i;

	i = 0;
	while (i < s)
	{
		((char *)str)[i] = 0;
		i++;
	}
}
