/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 16:18:35 by nrubin            #+#    #+#             */
/*   Updated: 2021/05/18 15:54:03 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_digits(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

// Allocates (with malloc(3)) and returns a string representing the integer
// received as an argument. It handles negative numbers.

char	*ft_itoa(int n)
{
	int		size;
	char	*ret;
	long	nbr;

	nbr = n;
	size = 0;
	if (nbr < 0)
	{
		size++;
		nbr *= -1;
	}
	size = size + ft_count_digits(nbr);
	if (!(ret = (char *)malloc(sizeof(*ret) * (size + 1))))
		return (NULL);
	ret[size] = '\0';
	size--;
	while (size >= 0)
	{
		ret[size] = nbr % 10 + '0';
		size--;
		nbr = nbr / 10;
	}
	if (n < 0)
		ret[0] = '-';
	return (ret);
}
