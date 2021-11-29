/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dups.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:05:25 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:25:24 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_that(t_list *lst, int i)
{
	while (lst)
	{
		if (!lst->next)
			return (0);
		lst = lst->next;
		if (lst->content == i)
		{
			write(2, "Error\n", 6);
			exit (0);
		}
	}
	return (0);
}

int	ft_dups(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (0);
		if (ft_that(lst, lst->content))
			return (1);
		lst = lst->next;
	}
	return (0);
}
