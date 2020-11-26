/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:13:07 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/26 13:04:46 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	unsigned char	*ret;

	ret = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		*ret = (unsigned char)c;
		ret++;
		i++;
	}
	return (b);
}
