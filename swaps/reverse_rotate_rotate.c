/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_rotate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:04:42 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:09:22 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate_rotate(t_ptrs *ptr)
{
	int	i;
	int	j;

	if (ptr->heada->next == NULL)
		return ;
	i = ft_lstsize(ptr->heada);
	ptr->firsta = ptr->heada;
	ptr->taila = ft_lstlast(ptr->heada);
	ptr->newtaila = ft_lstmove(ptr->heada, (i - 2));
	ptr->newtaila->next = NULL;
	ptr->taila->next = ptr->firsta;
	ptr->heada = ptr->taila;
	if (ptr->headb->next == NULL)
		return ;
	j = ft_lstsize(ptr->headb);
	ptr->firstb = ptr->headb;
	ptr->tailb = ft_lstlast(ptr->headb);
	ptr->newtailb = ft_lstmove(ptr->headb, (j - 2));
	ptr->newtailb->next = NULL;
	ptr->tailb->next = ptr->firstb;
	ptr->headb = ptr->tailb;
	write(1, "rrr\n", 4);
}
