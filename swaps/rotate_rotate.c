/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:04:54 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:04:55 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_rotate(t_ptrs *ptr)
{
	ptr->firsta = ptr->heada;
	ptr->heada = ptr->heada->next;
	ptr->firsta->next = NULL;
	ptr->taila = ft_lstlast(ptr->heada);
	ptr->taila->next = ptr->firsta;
	ptr->firstb = ptr->headb;
	ptr->headb = ptr->headb->next;
	ptr->firstb->next = NULL;
	ptr->tailb = ft_lstlast(ptr->headb);
	ptr->tailb->next = ptr->firstb;
	write(1, "rr\n", 3);
}
