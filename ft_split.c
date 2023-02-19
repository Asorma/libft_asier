/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:25:21 by ade-orma          #+#    #+#             */
/*   Updated: 2023/02/11 20:52:52 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	ft_split
*	Function that takes a string `s` and a delimiter character `c`, and 
*	splits the string into words based on the delimiter. It first counts
*	the number of words in the string, then allocates memory for an array 
*	of strings to hold the words. It then copies each word into the array, 
*	and finally adds a NULL terminator to the end of the array. 
*	The function returns the array of strings.
*/

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	count;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	strs = (char **)malloc(sizeof(char *) * (count + 1));
	if (!strs)
		return (NULL);
	i = 0;
	while (i < count)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		strs[i] = ft_substr(s, 0, len);
		if (!strs[i])
			return (ft_free_ptr_array((void **)strs, i));
		s += len;
		i++;
	}
	strs[count] = NULL;
	return (strs);
}
