/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:50:11 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/24 19:51:30 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	tmp = *alst;
	if (tmp == NULL)
	{
		ft_lstadd_front(alst, new);
		return ;
	}
	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
}
