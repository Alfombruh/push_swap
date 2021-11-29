/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsmallest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:06:09 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:24:28 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_smallest(t_list *heada)
{
	int	i;

	i = heada->content;
	while (heada)
	{
		if (i > heada->content)
			i = heada->content;
		if (!heada->next)
			return (i);
		heada = heada->next;
	}
	return (i);
}
