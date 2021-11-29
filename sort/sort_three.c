/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:04:19 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:04:21 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_ptrs *ptr)
{
	int	fst;
	int	scnd;
	int	thrd;

	fst = ptr->heada->content;
	scnd = ft_lstcont(ptr->heada, 1);
	thrd = ft_lstcont(ptr->heada, 2);
	if (!ft_lstorder(ptr->heada))
		return ;
	else if (fst > scnd && scnd > thrd && thrd < scnd)
	{
		rotate_a(ptr);
		swap_a(ptr);
	}
	else if (fst < scnd && scnd > thrd && fst > thrd)
		reverse_rotate_a(ptr);
	else if (fst < scnd && scnd > thrd && fst < thrd)
	{
		swap_a(ptr);
		rotate_a(ptr);
	}
	else if (fst > scnd && fst < thrd && thrd > scnd)
		swap_a(ptr);
	else if (fst > scnd && scnd < thrd && fst > scnd)
		rotate_a(ptr);
}
