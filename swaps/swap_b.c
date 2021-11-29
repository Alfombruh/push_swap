/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:04:59 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:10:35 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_b(t_ptrs *ptr)
{
	int	i;

	i = ptr->headb->next->content;
	ptr->headb->next->content = ptr->headb->content;
	ptr->headb->content = i;
	write(1, "sb\n", 3);
}
