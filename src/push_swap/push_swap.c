/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:58:15 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/26 10:58:15 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Check args to see if there are only spaces or tabs

static void	ft_check(char **argv)
{
	int	j;
	int	y;

	j = 1;
	y = 0;
	while (argv[j])
	{
		y = 0;
		while (argv[j][y])
		{
			if (argv[j][y] != 32 && argv[j][y] != '\t')
				break ;
			y++;
		}
		if (!argv[j][y])
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		j++;
	}
}

// Free memory allocated for an array/args

void	free_split(char **argv)
{
	int	i;

	i = 0;
	if (!argv || !*argv)
		return ;
	while (argv[i])
		free(argv[i++]);
	free(argv);
}

// ! MAIN 

int	main(int ac, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (ac <= 1)
		return (0);
	ft_check(argv);
	argv = ft_join_args(argv);
	init_stack_a(&a, argv);
	free_split(argv);
	if (!stack_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, 0);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			sort_stacks(&a, &b);
	}
	free_stack(&a);
}
