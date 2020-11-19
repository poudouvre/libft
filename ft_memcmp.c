/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:05:57 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/18 19:27:49 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	unsigned char	*unsigned_s1;
	unsigned char	*unsigned_s2;

	i = 0;
	unsigned_s1 = (unsigned char *)s1;
	unsigned_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (unsigned_s1[i] && unsigned_s2[i] &&
			(unsigned_s1[i] == unsigned_s2[i]) && i + 1 < n)
		i++;
	return (unsigned_s1[i] - unsigned_s2[i]);
}

/*
int	main(void)
{
	char s1[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	char s2[] = { 'H', 'f', 'l', 'l', 'o', '\0' };
	printf("ft_memcp\ns1: %s\ns2: %s\nResult: %i\n", s1, s2, ft_memcmp(s1, s2, 4));
	printf("memcmp\ns1: %s\ns2: %s\nResult: %i\n", s1, s2, memcmp(s1, s2, 4));
}
*/
