/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:00:10 by ade-orma          #+#    #+#             */
/*   Updated: 2023/02/11 21:01:27 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * 	ft_itoa
 *	INTEGER TO ASCII (string)
 *	Allocates memory for the string.
 */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	char	*str2;

	str = (char *)malloc(sizeof(char) * 2);
	if (!str)
		return (NULL);
	if (n == -2147483648)
	{
		*str2 = ft_strcpy(str, "-214783648");
		return (str2);
	}
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-n));
	}
	else if (n >= 10)
		str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}
