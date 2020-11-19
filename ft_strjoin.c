/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 21:02:57 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/19 15:24:34 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	len;
	char	*ret;
	int	i;
	int	j;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(ret = (char *)malloc(len + 1)) || (s1 == NULL || s2 == NULL))
		return (NULL);
	while (s1[i])
	{
		ret[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while(s2[i])
	{
		ret[j] = s2[i];
		i++;
		j++;
	}
	ret[j] = '\0';
	return (ret);
}

/*
int	main(void)
{
	char *s1 = "Hello there";
	char *s2 = "general Kenobi";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
*/
