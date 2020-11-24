/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 18:00:53 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/20 19:16:14 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char		*ret;
	const unsigned char	*unsigned_src;
	unsigned char		*unsigned_dst;

	i = 0;
	c = (unsigned char)c;
	ret = dst;
	unsigned_dst = (unsigned char *)dst;
	unsigned_src = (const unsigned char *)src;
	while (i < n)
	{
		unsigned_dst[i] = unsigned_src[i];
		if (unsigned_src[i] == c)
			return (&unsigned_dst[i + 1]);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char src1[] = "0123456789";
	char dst1[] = "abcdefghij";
	char src2[] = "0123456789";
	char dst2[] = "abcdefghij";
	int c = 'k';

	printf("memccpy\nsrc1:%s\ndst1:%s\nres1:%s\ndest_final:%s\n", src1, dst1, memccpy(dst1, src1, c, 7), dst1);	
	printf("ft_memccpy\nsrc2:%s\ndst2:%s\nres2:%s\ndest_final:%s\n", src2, dst2, ft_memccpy(dst2, src2, c, 7), dst2);
	return (0);
}
*/
