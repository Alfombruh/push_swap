/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:24:07 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:23:42 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*elm;

	elm = (t_list *)malloc(sizeof(*elm));
	if (!elm)
		return (NULL);
	elm->chunk = 0;
	elm->content = content;
	elm->next = NULL;
	return (elm);
}
