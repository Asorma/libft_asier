/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:20:50 by ade-orma          #+#    #+#             */
/*   Updated: 2023/02/12 12:55:08 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* ft_strmapi
* Function that applies the function `f` to each character in the string `s`,
* passing the index of the character as the first argument to `f`. It returns
* a new string created by `malloc` that contains the results of the `f`
* function applied to each character of `s`.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!(str))
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
