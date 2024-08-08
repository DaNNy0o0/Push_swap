/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:20:00 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/30 18:20:00 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Fn to push 1 node from source stack to destiny stack
static void	push(t_stack_node **dst, t_stack_node **src)
{
	t_stack_node	*node_to_push;

	if (!*src)
		return ;
	node_to_push = *src;
	*src = (*src)->next_node;
	if (*src)
		(*src)->prev_node = NULL;
	node_to_push->prev_node = NULL;
	if (!*dst)
	{
		*dst = node_to_push;
		node_to_push->next_node = NULL;
	}
	else
	{
		node_to_push->next_node = *dst;
		node_to_push->next_node->prev_node = node_to_push;
		*dst = node_to_push;
	}
}

// Push A
void	pa(t_stack_node **a, t_stack_node **b, int print)
{
	push(a, b);
	if (!print)
		ft_printf("pa\n");
}

// Push B
void	pb(t_stack_node **b, t_stack_node **a, int print)
{
	push(b, a);
	if (!print)
		ft_printf("pb\n");
}
