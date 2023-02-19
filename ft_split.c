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

static int	get_word_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;
	int		i;

	word_count = get_word_count(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		result[i] = ft_strndup(s, ft_strchr(s, c) - s);
		if (!result[i++])
			return ((char **)ft_free_ptr_array((void **)result, i));
		s += ft_strlen(result[i - 1]);
	}
	result[i] = NULL;
	return (result);
}
