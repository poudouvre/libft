/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:36:15 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/19 15:16:49 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_set(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i] || c == '\0')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	len;
	char	*ret;
	
	i = 0;
	j = 0;
	len = ft_strlen(s1) - 1;
	while (s1[i] && ft_is_set(s1[i], set))
		i++;
	while (s1[len] && ft_is_set(s1[len], set))
	{
		j++;
		len--;
	}
	len = ft_strlen(s1) - i - j;
	ret = ft_substr(s1, i, len);
	return ((char *)ret);
}

/*
int	main(void)
{
	char *str = "eede123b45c67e89cccaaa";
	char *set = "abcde";
	printf("%s\n", ft_strtrim(str, set));
	return (0);
}
*/
