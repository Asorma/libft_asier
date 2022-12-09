/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:10:41 by ade-orma          #+#    #+#             */
/*   Updated: 2022/12/09 12:31:09 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int c)
{
	int	i;
	int	j;

	i = ft_strlen(str);
	j = 0;
	while (i >= j)
		if (str[i - j++] == c)
			return ((char *)&str[i - (j - 1)]);
	return (NULL);
}
