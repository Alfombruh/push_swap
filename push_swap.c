/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofernan <jofernan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:06:26 by jofernan          #+#    #+#             */
/*   Updated: 2021/11/29 16:52:28 by jofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_freesplit(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

static	int	onearg(t_list **heada, char *argv)
{
	long long int	num;
	char			**split;
	int				i;

	i = 0;
	split = ft_split(argv, ' ');
	while (split[i] != (void *)0)
	{
		num = ft_asctoint(split[i++]);
		if (num == -2147483629)
		{
			write(2, "Error\n", 6);
			exit (0);
		}
		ft_lstadd_back(heada, ft_lstnew(num));
	}
	ft_freesplit(split);
	return (1);
}

static int	someargs(t_list **heada, char **argv, int argc)
{
	long long int	num;
	int				i;

	i = 0;
	while (i < argc - 1)
	{	
		num = ft_asctoint(argv[++i]);
		if (num == -2147483629)
		{
			write(2, "Error\n", 6);
			exit (0);
		}
		ft_lstadd_back(heada, ft_lstnew(num));
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_ptrs	ptrs;

	ft_memset(&ptrs, 0, sizeof(t_ptrs));
	if (argc > 2)
		someargs(&ptrs.heada, argv, argc);
	else if (argc == 2)
		onearg(&ptrs.heada, argv[1]);
	if (ft_dups(ptrs.heada))
		return (1);
	if (ft_lstsize(ptrs.heada) == 5)
		sort_five(&ptrs);
	else if (ft_lstsize(ptrs.heada) == 3)
		sort_three(&ptrs);
	else if (ft_lstsize(ptrs.heada) != 5)
		ft_sorting(&ptrs);
	ft_lstfree(&ptrs);
	return (0);
}
