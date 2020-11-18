/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:07:01 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/18 14:31:10 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


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

/*
int	main(void)
{
	char	arr1[] = { 'a', 'b', 'c', 'd' };
	int	c = 'a';

	printf("%p\n", ft_memchr(arr1, c, 1));
	printf("%p\n", memchr(arr1, c, 1));
	return (0);
}
*/
