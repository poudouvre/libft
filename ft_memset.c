/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:13:07 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/17 19:40:43 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	unsigned char	*ret;
	
	ret = b;
	i = 0;
	c = (unsigned char)c;
	while (i < len)
	{
		*ret = c;
		ret++;
		i++;
	}
	return (b);
}

/* 
int	main(void)
{
	char test[13];
	int i;
	for (i = 0; i < 12; i++)
	{
		test[i] = 'a';
	}
	test[i] = '\0';
	printf("%s", test);
	printf("%s\n", ft_memset(test, 'b', 12));
	return (0);
}
*/ 
