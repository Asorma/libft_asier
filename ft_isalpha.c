/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:07:48 by ade-orma          #+#    #+#             */
/*   Updated: 2022/12/01 03:39:05 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int	ft_isalpha(int i)
{
	if(('a' <= i && 'z' >= i) || ('A' <= i && 'Z' >= i))
		return(1);
	return(0);
}


/*
#include<stdio.h>
int	main(void)
{
	printf("%d", ft_isalpha('1'));
	return(0);
}
*/
