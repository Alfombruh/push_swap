/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstorder.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:06:04 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 15:43:20 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstorder(t_list	*head)
{
	int	i;

	while (head)
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
