/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:49:05 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/30 10:49:05 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Converts an alphar char to long type 

static long	ft_atol(const char *s, t_stack_node **a, char **av)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (*s == ' ' || *s == '\t' || *s == '\n' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		if ((result > LONG_MAX / 10) || (result == LONG_MAX / 10 && (*s
					- 48) > LONG_MAX % 10))
			free_errors(a, av);
		result = result * 10 + (*s++ - 48);
	}
	return (result * sign);
}

// Fn to append a node at the end of a linked list

static void	append_node(t_stack_node **stack, int n)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_stack_node));
	if (!node)
		return ;
	node->next_node = NULL;
	node->number_value = n;
	node->cheapest = 0;
	if (!(*stack))
	{
		*stack = node;
		node->prev_node = NULL;
	}
	else
	{
		last_node = find_last(*stack);
		last_node->next_node = node;
		node->prev_node = last_node;
	}
}

// Initialize an stack A from an array of args
void	init_stack_a(t_stack_node **a, char **argv)
{
	long	n;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (error_syntax(argv[i]))
			free_errors(a, argv);
		n = ft_atol(argv[i], a, argv);
		if (n > INT_MAX || n < INT_MIN)
			free_errors(a, argv);
		if (error_duplicate(*a, (int)n))
			free_errors(a, argv);
		append_node(a, (int)n);
		i++;
	}
}

// Find cheapest node of stack (field "cheapest" at 1)

t_stack_node	*get_cheapest(t_stack_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next_node;
	}
	return (NULL);
}

// Prepare an stack for push node to top, rotating stack if it's needed

void	prep_for_push(t_stack_node **stack,
					t_stack_node *top_node,
					char stack_name)
{
	while (*stack != top_node)
	{
		if (stack_name == 'a')
		{
			if (top_node->above_median)
				ra(stack, 0);
			else
				rra(stack, 0);
		}
		else if (stack_name == 'b')
		{
			if (top_node->above_median)
				rb(stack, 0);
			else
				rrb(stack, 0);
		}
	}
}