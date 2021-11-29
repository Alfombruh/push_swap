/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcontent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:05:43 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:25:38 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstcont(t_list *lst, int relative_place)
{
	int	count;

	count = 0;
	while (lst)
	{
		if (!lst->next)
			return (lst->content);
		if (relative_place > count++)
			lst = lst->next;
		else
			return (lst->content);
	}
	return (lst->content);
}
