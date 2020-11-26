/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:44:35 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/25 20:00:20 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*u_dst;
	const unsigned char	*u_src;

	u_dst = (unsigned char *)dst;
	u_src = (const unsigned char *)src;
	if (dst > src)
	{
		while (n--)
		{
			u_dst[n] = u_src[n];
		}
		return (dst);
	}
	return (ft_memcpy(dst, src, n));
}
