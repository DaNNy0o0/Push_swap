/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_handling.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 13:09:01 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 13:09:01 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Check if there are chars not valid in args

int	error_syntax(char *str)
{
	if (!(*str == '+' || *str == '-' || (*str >= '0' && *str <= '9')))
		return (1);
	if ((*str == '+' || *str == '-') && !(str[1] >= '0' && str[1] <= '9'))
		return (1);
	while (*++str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (1);
	}
	return (0);
}

// Check if there are duplicate numbers in args

int	error_duplicate(t_stack_node *a, int n)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->number_value == n)
			return (1);
		a = a->next_node;
	}
	return (0);
}

// Free memory allocated for a stack

void	free_stack(t_stack_node **stack)
{
	t_stack_node	*tmp;
	t_stack_node	*current;

	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next_node;
		current->number_value = 0;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

// Check all errors simultaneously
void	free_errors(t_stack_node **a, char **av)
{
	free_stack(a);
	free_split(av);
	write(2,"Error\n",6);
	exit(1);
}