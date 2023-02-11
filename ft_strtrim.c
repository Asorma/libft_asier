/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:03:20 by ade-orma          #+#    #+#             */
/*   Updated: 2023/02/11 19:22:28 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	ft_strtrim
 *	This function returns a copy of the input string without the specified
 *	leading and trailing characters which are considered whitespace.
 *	The function takes two parameters 's1', which is the input string to be
 *	trimmed and 'set', which is a string of characters to be treated as
 *	whitespace.
 */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	ptr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1 + start, end - start);
	ptr[end - start] = '\0';
	return (ptr);
}
