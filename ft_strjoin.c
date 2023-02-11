/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:36:14 by ade-orma          #+#    #+#             */
/*   Updated: 2023/02/11 19:12:59 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * 	ft_strjoin
 *	funcion para concatenar dos cadenas de caracteres en una sola cadena
 *	devuelve el puntero a la nueva cadena.
 *	La razon de usar malloc es para que si algun usuario con malicia viene a
 *	reventarnos el stack, hacemos la reserva de memoria y asi escurrimos la
 *	responsabilidad de la falta de memoria al usuario o al que le compro el
 *	ordenador porque le ha puesto poca ram.
 */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + \
				ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
