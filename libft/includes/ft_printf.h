/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:44:35 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/05/08 17:44:35 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// Standard libraries

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putcharacter_length(char character, int *length);
void	ft_string(char *args, int *length);

void	ft_number(int number, int *length);
void	ft_hexadecimal(unsigned int x, int *length, char x_or_X);
void	ft_unsigned_int(unsigned int u, int *length);
void	ft_pointer(size_t pointer, int *length);

int		ft_printf(char const *str, ...);

#endif