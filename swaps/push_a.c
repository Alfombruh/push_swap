/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:04:31 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:04:32 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(t_ptrs *ptr)
{
	ptr->firstb = ptr->headb;
	ptr->firstb = ptr->firstb->next;
	ft_lstadd_front(&ptr->heada, ptr->headb);
	ptr->headb = ptr->firstb;
	write(1, "pa\n", 3);
}
