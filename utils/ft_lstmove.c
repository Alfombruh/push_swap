/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:05:54 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:22:56 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstmove(t_list *lst, int relative_place)
{
	int		count;
	t_list	*temp;

	temp = lst;
	count = 0;
	if (lst)
	{
		while (relative_place > count++)
			temp = temp->next;
	}
	return (temp);
}
