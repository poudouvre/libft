/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:39:04 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/25 20:02:01 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_sep(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

int	ft_word_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (ft_is_sep(s[i], c) == 0 && ((ft_is_sep(s[i + 1], c) == 1)
					|| s[i + 1] == 0))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strdupn(const char *s, char c)
{
	char	*ret;
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] && ft_is_sep(s[len], c) == 0)
		len++;
	if (!(ret = (char *)malloc(sizeof(*ret) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		ret[i] = s[i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	int	i;
	int	j;

	if (!(ret = (char **)malloc(sizeof(*ret) * (ft_word_count(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (!ft_is_sep(s[i], c))
		{
			ret[j] = ft_strdupn(&s[i], c);
			j++;
			while (!ft_is_sep(s[i], c) && s[i + 1])
				i++;
		}
		i++;
	}
	ret[j] = 0;
	return (ret);
}

/*
int	main(void)
{
	char *str = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
	char **tab = ft_split(str, '\0');
	
	int i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	printf("%s\n", tab[i]);
	return (0);
}
*/
