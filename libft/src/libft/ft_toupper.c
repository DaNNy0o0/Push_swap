/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:25:27 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 20:23:29 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"


int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

// int	main()
// {
// 	int	c_lower = 'a';
// 	int	c_updated = ft_toupper(c_lower);

// 	printf("Original: %c, Actualizado: %c\n", c_lower, ft_toupper(c_updated));
// }

/*
! *************** FT_TOUPPER ***************

* Descripcion: Convierte un caracter en minuscula a mayuscula

*/