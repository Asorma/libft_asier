/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 09:49:15 by ade-orma          #+#    #+#             */
/*   Updated: 2022/12/03 10:23:34 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
		return(1);
	return(0);
}
