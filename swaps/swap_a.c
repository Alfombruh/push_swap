/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:04:56 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:09:58 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_ptrs *ptr)
{
	int	i;

	i = ptr->heada->next->content;
	ptr->heada->next->content = ptr->heada->content;
	ptr->heada->content = i;
	write(1, "sa\n", 3);
}
