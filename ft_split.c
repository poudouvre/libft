/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:39:04 by nrubin            #+#    #+#             */
/*   Updated: 2021/05/18 16:06:39 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Counts the amount of words the string 's' will be split in to.

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

// Returns a pointer to a new string which is the duplicate of the string 's'
// up to 'c' characters.

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

// Frees the array and the strings it contains in the case of a failing
// malloc(3).

void	*ft_free_tab(char **tab, int n)
{
	n = n - 1;
	while (tab[n])
		free(tab[n--]);
	free(tab);
	return (tab);
}

// Allocates (with malloc(3)) and returns an array of strings obtained by
// splitting 's' using the character 'c' as a delimiter. The array must be ended
// by a NULL pointer.

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		count;

	count = ft_word_count(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (count--)
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			if (!(tab[j] = ft_strdupn(&s[i], c)))
				return (ft_free_tab(tab, j));
			j++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	tab[j] = 0;
	return (tab);
}
