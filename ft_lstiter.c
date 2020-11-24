/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <nrubin@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:50:45 by nrubin            #+#    #+#             */
/*   Updated: 2020/11/24 19:35:08 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void(*f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	while(tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}
