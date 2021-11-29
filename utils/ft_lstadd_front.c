/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:05:30 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:20:54 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_front(t_list	**lst, t_list	*new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		(new)->next = NULL;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
