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

char	**ft_count_substrings(char const *s, char c)
{
	size_t	i;
	size_t	count;
	char	**ptr;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	ptr = (char **)malloc(sizeof(char *) * (count + 1));
	if (!ptr)
		return (NULL);
	ptr[count] = NULL;
	return (ptr);
}

char	**ft_free_substrings(char **ptr)
{
	size_t	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		ptr[i] = NULL;
		i++;
	}
	free(ptr);
	ptr = NULL;
	return (ptr);
}

char	**ft_alloc_substrings(char **ptr, char const *s, char c, size_t i)
{
	size_t	start;
	size_t	substring_id;

	substring_id = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			ptr[substring_id] = (char *)malloc(sizeof(char) * \
			(i - start + 1));
			if (!ptr[substring_id])
				return (ft_free_substrings(ptr));
			ft_memcpy(ptr[substring_id], s + start, i - start);
			ptr[substring_id][i - start] = '\0';
			substring_id++;
		}
	}
	ptr[substring_id] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s || ft_strlen(s) == 0)
	{
		ptr = (char **)malloc(sizeof(char *));
		if (!ptr)
			return (NULL);
		ptr[0] = NULL;
		return (ptr);
	}
	ptr = ft_count_substrings(s, c);
	if (!ptr)
		return (NULL);
	ptr = ft_alloc_substrings(ptr, s, c, 0);
	if (!ptr)
		return (NULL);
	return (ptr);
}
