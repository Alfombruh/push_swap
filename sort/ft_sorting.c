/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:02:54 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 16:52:06 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_firststep(t_ptrs *ptr)
{
	int			med;
	static int	chunk;

	med = ft_lstmed(ptr->heada);
	chunk++ ;
	while (ft_theresmaller(ptr->heada, med))
	{
		if (ptr->heada->content < med)
		{
			ptr->heada->chunk = chunk;
			push_b(ptr);
		}
		else
			rotate_a(ptr);
	}
}

static void	ft_second(t_ptrs *ptr)
{
	int	med;
	int	chunk;
	int	rotates;

	rotates = 0;
	chunk = ptr->headb->chunk;
	med = ft_lstmed(ptr->headb);
	while (ft_theresbigger(ptr->headb, med))
	{
		if (ptr->headb->content >= med)
		{
			push_a(ptr);
		}
		else
		{
			rotate_b(ptr);
			rotates++;
		}
	}
	while (rotates-- != 0)
		reverse_rotate_b(ptr);
}

static void	ft_third(t_ptrs *ptr)
{
	int	med;
	int	chunk;
	int	rotates;

	rotates = 0;
	chunk = ptr->heada->chunk;
	med = ft_lstmed(ptr->heada);
	while (ft_theresmaller(ptr->heada, med))
	{
		if (ptr->heada->content < med)
		{
			ptr->heada->chunk += 1;
			push_b(ptr);
		}
		else
		{
			rotate_a(ptr);
			rotates++;
		}
	}
	while (rotates-- != 0)
		reverse_rotate_a(ptr);
}

int	ft_sorting(t_ptrs *ptr)
{
	int	size;
	int	this;

	this = 0;
	size = ft_lstsize(ptr->heada);
	while ((ft_lstorder(ptr->heada)
			||size != ft_lstsize(ptr->heada)) || ptr->headb != NULL)
	{
		while (ft_lstsize(ptr->heada) > 2 && !this)
			ft_firststep(ptr);
		if (ft_lstsize(ptr->heada) == 2 && ft_lstorder(ptr->heada))
			swap_a(ptr);
		this = 1;
		if (ft_lstsize(ptr->heada) != size)
		{	
			if (!ft_lstorder(ptr->heada))
				ft_second(ptr);
			if (!ft_lstorder(ptr->heada))
				ft_lstzero(ptr->heada);
			if (ft_lstchunkorder(ptr->heada, ptr->heada->chunk))
				ft_third(ptr);
		}
	}
	return (0);
}
