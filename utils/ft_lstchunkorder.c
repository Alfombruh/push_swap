/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstchunkorder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:05:37 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:21:13 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstchunkorder(t_list	*head, int chunk)
{
	int	i;

	while (head->chunk == chunk)
	{
		if (!head->next)
			return (0);
		i = head->content;
		head = head->next;
		if (i > head->content)
			return (1);
	}
	return (0);
}
