/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:10:41 by ade-orma          #+#    #+#             */
/*   Updated: 2023/01/18 18:31:11 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	strrchr
*	Busca la ultima ocasion en la que un caracter c que definimos. 
*	Una vez encontrado, la funcion devuelve la cadena empezando por ese
*	caracter y todo lo que haya despues. Asier sabin / s -> sabin
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if ((char)c == str[i])
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}
