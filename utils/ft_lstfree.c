/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:05:45 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:25:54 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstfree(t_ptrs *ptr)
{
	t_list	*temp;

	while (ptr->heada && ft_lstsize(ptr->heada) != 1)
	{
		temp = ptr->heada;
		ptr->heada = ptr->heada->next;
		free(temp);
	}
	while (ptr->headb)
	{
		temp = ptr->headb;
		ptr->headb = ptr->headb->next;
		free(temp);
	}
	free(ptr->heada);
}
