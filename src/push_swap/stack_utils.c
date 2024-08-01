/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:26:11 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/30 11:26:11 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Fn to obtain length of a stack

int	stack_len(t_stack_node *stack)
{
	int	count;

	if (!stack)
		return (0);
	count = 0;
	while (stack)
	{
		stack = stack->next_node;
		count++;
	}
	return (count);
}

// Find last node of stack

t_stack_node	*find_last(t_stack_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next_node)
		stack = stack->next_node;
	return (stack);
}

// Check if a stack is sorted or not

int	stack_sorted(t_stack_node *stack)
{
	if (!stack)
		return (1);
	while (stack->next_node)
	{
		if (stack->number_value > stack->next_node->number_value)
			return (0);
		stack = stack->next_node;
	}
	return (1);
}

// Find  node of stack with minimum number value

t_stack_node	*find_min(t_stack_node *stack)
{
	long			min;
	t_stack_node	*min_node;

	if (!stack)
		return (NULL);
	min = LONG_MAX;
	while (stack)
	{
		if (stack->number_value < min)
		{
			min = stack->number_value;
			min_node = stack;
		}
		stack = stack->next_node;
	}
	return (min_node);
}

// Find  node of stack with max number value

t_stack_node	*find_max(t_stack_node *stack)
{
	long			max;
	t_stack_node	*max_node;

	if (!stack)
		return (NULL);
	max = LONG_MIN;
	while (stack)
	{
		if (stack->number_value > max)
		{
			max = stack->number_value;
			max_node = stack;
		}
		stack = stack->next_node;
	}
	return (max_node);
}