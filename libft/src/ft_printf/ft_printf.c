/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:56:36 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/05/08 17:56:36 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

// | Conversion | Description                                              	|
// |------------|----------------------------------------------------------	|
// | 		%c     | Print a single character.                              |
// | 		%s     | Print a string of characters.                          |
// | 		%p     | The void * pointer argument is printed in hexadecimal. |
// | 		%d     | Print a decimal (base 10) number.                      |
// | 		%i     | Print an integer in base 10.                           |
// | 		%u     | Print an unsigned decimal (base 10) number.            |
// | 		%x     | Print a number in hexadecimal (base 16), with lowercase|
// | 		%X     | Print a number in hexadecimal (base 16), with uppercase|
// | 		%%     | Print a percent sign.                                  |

#include "../includes/ft_printf.h"

static void	ft_printf_string(va_list *args, int *len)
{
	char	*str;

	str = va_arg(*args, char *);
	if (str == NULL)
		ft_string("(null)", len);
	else
		ft_string(str, len);
}

static void	ft_printf_pointer(va_list *args, int *len)
{
	size_t	ptr;

	ptr = va_arg(*args, size_t);
	if (ptr == 0)
		ft_string("(nil)", len);
	else
		ft_pointer(ptr, len);
}

static void	ft_printf_checker(char s, va_list *args, int *len, int *i)
{
	if (s == 's')
		ft_printf_string(args, len);
	else if (s == 'p')
		ft_printf_pointer(args, len);
	else if (s == 'd' || s == 'i')
		ft_number(va_arg(*args, int), len);
	else if (s == 'u')
		ft_unsigned_int(va_arg(*args, unsigned int), len);
	else if (s == 'x' || s == 'X')
		ft_hexadecimal(va_arg(*args, unsigned int), len, s);
	else if (s == 'c')
		ft_putcharacter_length(va_arg(*args, int), len);
	else if (s == '%')
		ft_putcharacter_length('%', len);
	else
		(*i)--;
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		length;

	if (str == NULL)
		return (0);
	va_start(args, str);
	i = 0;
	length = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_printf_checker(str[++i], &args, &length, &i);
			i++;
		}
		else
		{
			ft_putcharacter_length((char)str[i], &length);
			i++;
		}
	}
	va_end(args);
	return (length);
}
