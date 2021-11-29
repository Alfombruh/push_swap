/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:05:01 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:10:20 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_swap(t_ptrs *ptr)
{
	int	i;

	i = ptr->heada->next->content;
	ptr->heada->next->content = ptr->heada->content;
	ptr->heada->content = i;
	i = ptr->headb->next->content;
	ptr->headb->next->content = ptr->headb->content;
	ptr->headb->content = i;
	write(1, "ss\n", 3);
}
