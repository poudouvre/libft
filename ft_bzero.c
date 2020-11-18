/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:04:05 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/18 13:49:03 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	c;
	
	c = '\0';
	if (n == 0)
		return;
	ft_memset(s, c, n);
	return;
}

/*
int	main(void)
{
	char test[13];
	int	i;
	for (i = 0; i < 12; i++)
	{
		test[i] = 'q';
	}
	test[i] = '\0';
	printf("%s\n", test);
	ft_bzero(test, 0);
	printf("%s\n", test);
	return (0);
}
*/
