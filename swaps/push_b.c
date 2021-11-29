/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:04:34 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:04:35 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_b(t_ptrs *ptr)
{
	ptr->firsta = ptr->heada;
	ptr->firsta = ptr->firsta->next;
	ft_lstadd_front(&ptr->headb, ptr->heada);
	ptr->heada = ptr->firsta;
	write(1, "pb\n", 3);
}
