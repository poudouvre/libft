/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:39:04 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/26 15:49:40 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_word_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char	*ft_strdupn(const char *s, char c)
{
	char	*ret;
	int		len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	if (!(ret = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ret[len] = 0;
	while (len--)
		ret[len] = s[len];
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	int		i;
	int		j;
	int		count;

	count = ft_word_count(s, c);
	if (!(ret = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (count--)
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			ret[j] = ft_strdupn(&s[i], c);
			j++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	ret[j] = 0;
	return (ret);
}
