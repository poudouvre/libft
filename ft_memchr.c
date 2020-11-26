/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:07:01 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/25 20:01:48 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const unsigned char	*unsigned_s;

	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		unsigned_s = s;
		if (*unsigned_s == c)
			return ((void *)unsigned_s);
		i++;
		s++;
	}
	return (NULL);
}
