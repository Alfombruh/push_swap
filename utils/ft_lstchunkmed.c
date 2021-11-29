/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstchunkmed.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:05:34 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:19:02 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_get_pivot(t_list *head, int ref)
{
	int		catched;
	int		min;
	t_list	*temp;
	int		chunk;

	chunk = head->chunk;
	temp = head;
	catched = 2147483647;
	while (ref-- > 0 && head->chunk == chunk)
	{
		min = -2147483648;
		while (head && head->next)
		{
			if (head->content > min && head->content < catched)
				min = head->content;
			head = head->next;
		}
		catched = min;
		head = temp;
	}
	return (catched);
}

static int	ft_chunksize(t_list *head)
{
	int	i;
	int	j;

	i = head->chunk;
	j = 0;
	while (head)
	{
		if (!head->next)
			return (j);
		if (head->chunk != i)
			return (j);
		head = head->next;
		j++;
	}
	return (j);
}

int	ft_lstchunkmed(t_list *head)
{
	int	ref;
	int	med;
	int	chunk;

	med = 0;
	ref = 1;
	chunk = head->chunk;
	if (ft_chunksize(head) % 2 == 0)
		ref = (ft_chunksize(head) / 2);
	else if (ft_chunksize(head) % 2 == 1)
		ref = ((ft_chunksize(head) / 2));
	if (ref == 0)
		ref = 1;
	med = ft_get_pivot(head, ref);
	return (med);
}
