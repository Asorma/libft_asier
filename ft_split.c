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

static int	ft_count_substrings(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
			continue ;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;
	int		n;

	if (!s)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * (ft_count_substrings(s, c) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		n = ft_strchr(s + i, c) - (s + i);
		ptr[j] = ft_strndup(s + i, n);
		if (!ptr[j++])
			return (ft_free_ptr_array((void **)ptr, j));
		i += n;
	}
	ptr[j] = NULL;
	return (ptr);
}
