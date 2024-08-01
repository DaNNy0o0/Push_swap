/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:00:19 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/30 12:00:19 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Fn to swap first 2 nodes of a stack
static void	swap(t_stack_node **head)
{
	if (!*head || !(*head)->next_node)
		return ;
	*head = (*head)->next_node;
	(*head)->prev_node->prev_node = *head;
	(*head)->prev_node->next_node = (*head)->next_node;
	if ((*head)->next_node)
		(*head)->next_node->prev_node = (*head)->prev_node;
	(*head)->next_node = (*head)->prev_node;
	(*head)->prev_node = NULL;
}

// Swap the first two nodes of stack `a` and print the instruction

void	sa(t_stack_node **a, int print)
{
	swap(a);
	if (!print)
		ft_printf("sa\n");
}

// Swap the first two nodes of stack `b` and print the instruction

void	sb(t_stack_node **b, int print)
{
	swap(b);
	if (!print)
		ft_printf("sb\n");
}

// Swap the first two nodes of the stack and print the instruction

void	ss(t_stack_node **a, t_stack_node **b, int print)
{
	swap(a);
	swap(b);
	if (!print)
		ft_printf("ss\n");
}