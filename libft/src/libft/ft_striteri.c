/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:27:55 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/03/25 13:27:55 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (*s)
		f(i++, s++);
}

// void	func(unsigned int i, char *c)
// {
// 	*c += i;
// }

// int	main(void)
// {
// 	char	str[] = "aaaaaa";

// 	ft_striteri(str, &func);
// 	printf("%s\n", str);
// }

/*
! *************** FT_STRITERI ***************

* Descripcion: Aplica una funcion a cada elemento de una cadena


*/