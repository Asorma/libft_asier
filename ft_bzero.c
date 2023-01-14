/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:45:18 by ade-orma          #+#    #+#             */
/*   Updated: 2023/01/14 14:02:07 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Pone ceros desde el inicio del string hasta la longitud que le pasamos

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
