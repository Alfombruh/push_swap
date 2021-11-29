/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:04:39 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:09:06 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate_b(t_ptrs *ptr)
{
	int	i;

	if (ptr->headb->next == NULL)
		return ;
	i = ft_lstsize(ptr->headb);
	ptr->firstb = ptr->headb;
	ptr->tailb = ft_lstlast(ptr->headb);
	ptr->newtailb = ft_lstmove(ptr->headb, (i - 2));
	ptr->newtailb->next = NULL;
	ptr->tailb->next = ptr->firstb;
	ptr->headb = ptr->tailb;
	write(1, "rrb\n", 4);
}
