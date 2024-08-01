/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:44:55 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/25 12:44:55 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// Own libraries
# include "../libft/includes/ft_printf.h"
# include "../libft/includes/libft.h"

// System libraries
# include <limits.h>  // To define limits
# include <stdbool.h> // To use booleans
# include <stdlib.h>  // To use malloc, free, etc...

// ! Stack node structure
typedef struct s_stack_node
{
	int					number_value;
	int					index;
	int					push_cost;
	int					above_median;
	int					cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next_node;
	struct s_stack_node	*prev_node;
}						t_stack_node;

// ! Error handling

int						error_syntax(char *str);
int						error_duplicate(t_stack_node *a, int n);
void					free_stack(t_stack_node **stack);
void					free_errors(t_stack_node **a, char **av);

// ! Stack initialization

void					init_stack_a(t_stack_node **a, char **av);
char					**split(char *s, char c);

// ! Nodes initialization
void					init_nodes_a(t_stack_node *a, t_stack_node *b);
void					init_nodes_b(t_stack_node *a, t_stack_node *b);
void					current_index(t_stack_node *stack);
void					set_cheapest(t_stack_node *stack);
t_stack_node			*get_cheapest(t_stack_node *stack);
void					prep_for_push(t_stack_node **s, t_stack_node *n,
							char c);

// ! Utilities
int						stack_len(t_stack_node *stack);
t_stack_node			*find_last(t_stack_node *stack);
int						stack_sorted(t_stack_node *stack);
t_stack_node			*find_min(t_stack_node *stack);
t_stack_node			*find_max(t_stack_node *stack);
char					**ft_join_args(char **av);

// ! Operations

// * Sort

void					sa(t_stack_node **a, int print);
void					sb(t_stack_node **b, int print);
void					ss(t_stack_node **a, t_stack_node **b, int print);

// * Rotate

void					ra(t_stack_node **a, int print);
void					rb(t_stack_node **b, int print);
void					rr(t_stack_node **a, t_stack_node **b, int print);

// * Reverse rotate

void					rra(t_stack_node **a, int print);
void					rrb(t_stack_node **b, int print);
void					rrr(t_stack_node **a, t_stack_node **b, int print);

// * Push

void					pa(t_stack_node **a, t_stack_node **b, int print);
void					pb(t_stack_node **b, t_stack_node **a, int print);

// ! Algorithms

void					sort_three(t_stack_node **a);
void					sort_stacks(t_stack_node **a, t_stack_node **b);
void					min_on_top(t_stack_node **a);

// ! Free memory
void					free_split(char **s2);

#endif