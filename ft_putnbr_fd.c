/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 16:05:59 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/20 18:41:12 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	unsigned_n;

	if (n < 0)
	{
		unsigned_n = (-1 * n);
		ft_putchar_fd('-', fd);
	}
	else
		unsigned_n = (unsigned int)n;
	if (unsigned_n >= 10)
	{
		ft_putnbr_fd(unsigned_n / 10, fd);
		ft_putnbr_fd(unsigned_n % 10, fd);
	}
	else
		ft_putchar_fd(unsigned_n + '0', fd);
}
