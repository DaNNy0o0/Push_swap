/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:54:47 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/30 11:54:47 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Fn algorithm to sort stack with just 3 nodes

void	sort_three(t_stack_node **a)
{
	t_stack_node	*biggest_node;

	biggest_node = find_max(*a);
	if (biggest_node == *a)
		ra(a, 0);
	else if ((*a)->next_node == biggest_node)
		rra(a, 0);
	if ((*a)->number_value > (*a)->next_node->number_value)
		sa(a, 0);
}

// Fn to push node with min number value to top of a stack

void	min_on_top(t_stack_node **a)
{
	while ((*a)->number_value != find_min(*a)->number_value)
	{
		if (find_min(*a)->above_median)
			ra(a, 0);
		else
			rra(a, 0);
	}
}