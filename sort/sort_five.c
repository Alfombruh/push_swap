/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:03:39 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 16:52:25 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_smallpos(t_list *lst, int smallest)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		if (lst->content == smallest)
			return (i);
		if (!lst->next)
			return (i);
		lst = lst->next;
	}
	return (i);
}

void	sort_five(t_ptrs *ptr)
{
	int	smallest;

	if (!ft_lstorder(ptr->heada))
		return ;
	while (ft_lstsize(ptr->heada) > 3 && ft_lstsize(ptr->headb) < 2)
	{
		smallest = ft_smallest(ptr->heada);
		if (ptr->heada->content != smallest)
		{
			if (ft_smallpos(ptr->heada, smallest) < 3)
				rotate_a(ptr);
			else
				reverse_rotate_a(ptr);
		}
		else
			push_b(ptr);
	}
	while (ft_lstorder(ptr->heada))
	{	
		if (!ft_lstorder(ptr->headb))
			swap_b(ptr);
		sort_three(ptr);
	}
	push_a(ptr);
	push_a(ptr);
}
