/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:05:20 by ade-orma          #+#    #+#             */
/*   Updated: 2022/12/03 10:40:30 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;
	i = 0;

	while(str[i] != '/0')
	{
		i++;
	}
	i--;
	return (i);
}
