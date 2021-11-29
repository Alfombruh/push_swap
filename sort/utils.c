/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:04:23 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 15:08:57 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_chunktoa(t_ptrs *ptr)
{
	int	med;
	int	chunk;
	int	i;

	i = 0;
	chunk = ptr->headb->chunk;
	med = ft_lstmed(ptr->headb);
	while (ptr->headb && ptr->headb->chunk == chunk && ptr->heada->content)
	{
		if (ptr->headb->content >= med)
		{
			push_a(ptr);
			ptr->heada->chunk = 0;
		}
		else
		{
			rotate_b(ptr);
			i++;
		}
	}
	while (i > 0)
	{
		reverse_rotate_b(ptr);
		i--;
	}
}

void	ft_alltoa(t_ptrs *ptr)
{
	while (ptr->headb)
	{
		if (!ptr->headb->next)
			return ;
		push_a(ptr);
	}
}

int	ft_theresbigger(t_list *head, int med)
{
	while (head)
	{
		if (head->content >= med)
			return (1);
		if (!head->next)
			return (0);
		head = head->next;
	}
	return (0);
}

int	ft_theresmaller(t_list *head, int med)
{
	while (head)
	{
		if (head->content < med)
			return (1);
		if (!head->next)
			return (0);
		head = head->next;
	}
	return (0);
}
