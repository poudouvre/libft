/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:50:19 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/24 17:06:30 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *tmp;

	if (!(tmp = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	tmp->content = content;
	tmp->next = NULL;
	return (tmp);
}
