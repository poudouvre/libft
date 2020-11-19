/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 18:40:26 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/18 19:00:33 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	char *ret;
	
	if (count == 0 || size == 0)
		return (NULL);
	if (!(ret = (char *)malloc(count * size)))
		return (NULL);
	ft_bzero(ret, size);
	return ((void *)ret);
}
