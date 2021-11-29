/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:04:48 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:09:50 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_b(t_ptrs *ptr)
{
	if (ptr->headb->next == NULL)
		return ;
	ptr->firstb = ptr->headb;
	ptr->headb = ptr->headb->next;
	ptr->firstb->next = NULL;
	ptr->tailb = ft_lstlast(ptr->headb);
	ptr->tailb->next = ptr->firstb;
	write(1, "rb\n", 3);
}
