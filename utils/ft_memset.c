/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:06:13 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 14:06:14 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*aux;
	size_t			i;

	i = 0;
	aux = (unsigned char *)b;
	while (i < len)
		aux[i++] = c;
	return (aux);
}
