/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:06:11 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:24:44 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstzero(t_list *lst)
{
	while (lst)
	{	
		lst->chunk = 0;
		if (!lst->next)
			return ;
		lst = lst->next;
	}
	return ;
}
