/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmed.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:05:52 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 16:52:59 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_get_pivot(t_list *head, int ref)
{
	long	catched;
	int		min;
	t_list	*temp;
	int		chunk;

	chunk = head->chunk;
	temp = head;
	catched = 2147483648;
	while (ref-- > 0)
	{
		min = -2147483648;
		while (head && head->next && head->chunk == chunk)
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
	int	chunk;
	int	i;

	i = 1;
	chunk = head->chunk;
	while (head->next && head->chunk == chunk)
	{
		head = head->next;
		i++;
	}
	return (i);
}

int	ft_lstmed(t_list *head)
{
	int	ref;
	int	med;

	med = 0;
	ref = (ft_chunksize(head) / 2);
	if (ref == 0)
		ref = 1;
	med = ft_get_pivot(head, ref);
	return (med);
}
