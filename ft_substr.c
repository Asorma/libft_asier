/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:29:58 by ade-orma          #+#    #+#             */
/*   Updated: 2023/02/12 10:35:25 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_substr
 * Given a string `s`, this function returns a substring
 * starting from the `start` index and with a length of `len`.
 * 
 * Example:
 * s: "My name is Asier Sabin"
 * start: 11
 * len: 5
 * result: "Asier"
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s < start)
		start = len_s;
	if (len > (len_s - start))
		len = len_s - start;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memcpy((char *)ptr, (char *)s + start, (size_t)len);
	ptr[len] = '\0';
	return (ptr);
}
