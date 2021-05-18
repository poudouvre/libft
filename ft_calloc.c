/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 18:40:26 by nrubin            #+#    #+#             */
/*   Updated: 2021/05/18 15:53:27 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (using malloc(3)) unused space for an array of 'count' elements
// each of whose size in bytes is 'size'. The space shall be initialized to all
// bits 0.

void	*ft_calloc(size_t count, size_t size)
{
	char	*ret;

	if (!(ret = (char *)malloc(count * size)))
		return (NULL);
	ft_bzero(ret, size * count);
	return ((void *)ret);
}
