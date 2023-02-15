/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:10:41 by ade-orma          #+#    #+#             */
/*   Updated: 2023/01/18 18:31:11 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* ft_strrchr
* Function that searches for the last occurrence of the character `c` in a
* string `str`. If `c` is found, the function returns a pointer to the first
* occurrence of the `c` character in the `str` string. If `c` is not found,
* the function returns NULL.
* Asier sabin / s -> sabin
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if ((char)c == str[i])
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}
