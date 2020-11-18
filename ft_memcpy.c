/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 20:22:30 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/18 16:52:00 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char		*ret;
	const unsigned char	*unsigned_src;
	unsigned char		*unsigned_dst;

	i = 0;
	ret = dst;
	while (i < n)
	{
		unsigned_dst = (unsigned char *)dst;
		unsigned_src = (const unsigned char *)src;
		unsigned_dst[i] = unsigned_src[i];
		i++;
	}
	return (ret);
}

/*
int	main(void)
{
	char	dst[10];
	char	src[10];
	int	i;
	int	j;

	i = 0; 
	j = 0;

	while (i < 9)
		dst[i++] = 'a';
	dst[i] = '\0';
	while (j < 9)
		src[j++] = 'b';
	src[j] = '\0';

	printf("src: %s\ndst: %s\n\n", src, dst);
	ft_memcpy(dst, src, 3);
	printf("src: %s\ndst: %s\n", src, dst);
	return (0);
}
*/
