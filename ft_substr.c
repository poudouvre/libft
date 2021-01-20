/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:17:21 by nrubin            #+#    #+#             */
/*   Updated: 2021/01/20 16:47:00 by nrubin           ###   ########.fr       */
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
		return (ft_strdup(""));
	ret = (char *)malloc(sizeof(*ret) * (len + 1));
	if (!ret)
		return (NULL);
	while (s[start] && i < len)
	{
		ret[i] = s[start];
		i++;
		start++;
	}
	ret[i] = 0;
	return (ret);
}
