/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:44:35 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/18 19:28:12 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int			i;
	unsigned char		*ret;
	const unsigned char	*unsigned_src;
	unsigned char		*unsigned_dst;
	
	ret = dst;
	unsigned_src = (const unsigned char *)src;
	unsigned_dst = (unsigned char *)dst;
	if (dst < src)
		return(ft_memcpy(dst, src, n));
	while (n >= 0)
	{
		unsigned_dst[n] = unsigned_src[n];
		n--;
	}
	return (ret);
}

/*
int	main(void)
{
	char	src[] = { '1', '2', '3', '4', '5', '6', '7', '8', '\0' };
	char	src2[] = { '1', '2', '3', '4', '5', '6', '7', '8', '\0' };
	
	memmove(&src[2], &src[3], 2);
	ft_memmove(&src2[2], &src2[3], 2);
	printf("src: %s\nsrc2:%s\n", src, src2);
	return (0);
}
*/
