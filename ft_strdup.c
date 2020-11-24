/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 19:12:27 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/24 14:48:49 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *ret;
	size_t len;
	size_t	i;

	i = 0;
	len = ft_strlen(s1);
	if (!(ret = (char *)malloc(sizeof(*ret) * (len + 1))))
		return (NULL);
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	ret[i] = 0;
	return(ret);
}

/*
int	main(void)
{
	char *str = "Hello there general kenobi";

	printf("%s\n", strdup(str));
	printf("%s\n", ft_strdup(str));
	return (0);
}
*/
