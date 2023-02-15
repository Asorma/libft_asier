/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:39:35 by ade-orma          #+#    #+#             */
/*   Updated: 2023/02/12 13:44:52 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	ft_putnbr_fd
*	Function that writes the integer `n` to the file descriptor `fd`.
*/

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int long	i;

	i = n;
	if (i < 0)
	{
		write(fd, "-", 1);
		i = i * -1;
	}
	if (i > 9)
	{
		ft_putnbr_fd(i / 10, fd);
	}
	ft_putchar_fd(i % 10 + '0', fd);
}
