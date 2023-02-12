/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:00:10 by ade-orma          #+#    #+#             */
/*   Updated: 2023/02/12 12:20:28 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * 	ft_itoa
 *	INTEGER TO ASCII (string)
 *	Allocates memory for the string.
 */

#include "libft.h"

int	ft_nbrlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	long	num;
	size_t	len;

	len = ft_nbrlen(n);
	num = n;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len--] = '\0';
	if (num < 0)
	{
		ptr[0] = '-';
		num = -num;
	}
	if (num == 0)
		ptr[0] = '0';
	while (num > 0)
	{
		ptr[len--] = (num % 10) + '0';
		num /= 10;
	}
	return (ptr);
}
