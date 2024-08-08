/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:56:14 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 12:56:14 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Fn to reverse rotate nodes of a stack
static void	rev_rotate(t_stack_node **stack)
{
	t_stack_node	*last;

	if (!*stack || !(*stack)->next_node)
		return ;
	last = find_last(*stack);
	last->prev_node->next_node = NULL;
	last->next_node = *stack;
	last->prev_node = NULL;
	*stack = last;
	last->next_node->prev_node = last;
}

// Reverse rotate stack A
void	rra(t_stack_node **a, int print)
{
	rev_rotate(a);
	if (!print)
		ft_printf("rra\n");
}

// Reverse rotate stack B

void	rrb(t_stack_node **b, int print)
{
	rev_rotate(b);
	if (!print)
		ft_printf("rrb\n");
}

// Reverse rotate both stacks

void	rrr(t_stack_node **a, t_stack_node **b, int print)
{
	rev_rotate(a);
	rev_rotate(b);
	if (!print)
		ft_printf("rrr\n");
}
