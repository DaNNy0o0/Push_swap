/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:39:16 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 18:39:16 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Takes an array of args/string, concatenate all strings
// separating them by spaces between them and return a full array
// with args, separated by space.

char	**ft_join_args(char **argv)
{
	char	*tmp;
	char	*str;
	char	**final_array;
	int		i;

	i = 1;
	tmp = ft_strjoin(argv[i++], " ");
	while (argv[i])
	{
		str = ft_strjoin(tmp, argv[i]);
		free(tmp);
		tmp = ft_strjoin(str, " ");
		free(str);
		i++;
	}
	final_array = ft_split(tmp, ' ');
	free(tmp);
	return (final_array);
}