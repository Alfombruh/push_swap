/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:04:37 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:08:52 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate_a(t_ptrs *ptr)
{
	int	i;

	if (ptr->heada->next == NULL)
		return ;
	i = ft_lstsize(ptr->heada);
	ptr->firsta = ptr->heada;
	ptr->taila = ft_lstlast(ptr->heada);
	ptr->newtaila = ft_lstmove(ptr->heada, (i - 2));
	ptr->newtaila->next = NULL;
	ptr->taila->next = ptr->firsta;
	ptr->heada = ptr->taila;
	write(1, "rra\n", 4);
}
