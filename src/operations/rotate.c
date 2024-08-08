/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:48:47 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/30 17:48:47 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Fn to rotate nodes of stack
static void	rotate(t_stack_node **stack)
{
	t_stack_node	*last_node;

	if (!*stack || !(*stack)->next_node)
		return ;
	last_node = find_last(*stack);
	last_node->next_node = *stack;
	*stack = (*stack)->next_node;
	(*stack)->prev_node = NULL;
	last_node->next_node->prev_node = last_node;
	last_node->next_node->next_node = NULL;
}

// Rotate nodes of A stack
void	ra(t_stack_node **a, int print)
{
	rotate(a);
	if (!print)
		ft_printf("ra\n");
}

// Rotate nodes of B stack

void	rb(t_stack_node **b, int print)
{
	rotate(b);
	if (!print)
		ft_printf("rb\n");
}

// Rotate nodes of both stacks

void	rr(t_stack_node **a, t_stack_node **b, int print)
{
	rotate(a);
	rotate(b);
	if (!print)
		ft_printf("rr\n");
}
