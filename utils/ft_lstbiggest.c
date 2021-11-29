/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstbiggest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:05:32 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:16:27 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_biggest(t_list *heada)
{
	int	i;

	i = heada->content;
	while (heada)
	{
		if (i < heada->content)
			i = heada->content;
		if (!heada->next)
			return (i);
		heada = heada->next;
	}
	return (i);
}
