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

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	*ft_get_word(char const *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_memcpy(word, s, len);
	word[len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	strs = (char **)malloc(sizeof(char *) * (words + 1));
	if (!strs)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		strs[i] = ft_get_word(s, c);
		if (!strs[i])
			return (NULL);
		while (*s && *s != c)
			s++;
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
