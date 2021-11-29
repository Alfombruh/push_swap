/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:04:44 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:04:52 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(t_ptrs *ptr)
{
	if (ptr->heada->next == NULL)
		return ;
	ptr->firsta = ptr->heada;
	ptr->heada = ptr->heada->next;
	ptr->firsta->next = NULL;
	ptr->taila = ft_lstlast(ptr->heada);
	ptr->taila->next = ptr->firsta;
	write(1, "ra\n", 3);
}
