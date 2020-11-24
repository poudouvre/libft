/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:17:21 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/23 21:29:40 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ret;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		ret = malloc(sizeof(char));
		ret[0] = 0;
		return (ret);
	}
	if (!(ret = (char *)malloc(sizeof(*ret) * (len + 1))))
		return (NULL);
	while (s[start] && i < len)
	{
		ret[i] = s[start];
		i++;
		start++;
	}
	ret[i] = '\0';
	return (ret);
}

/*
int	main(void)
{
	char	*str = "HellotheregeneralKenobi";
	printf("%s\n", ft_substr(str, 5, 5));
	return (0);
}
*/
