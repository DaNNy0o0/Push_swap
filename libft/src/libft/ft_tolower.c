/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:28:28 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 20:23:29 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"


int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

// int	main()
// {
// 	int	c_upper = 'A';
// 	int	c_updated = ft_tolower(c_upper);

// 	printf("Original: %c, Actualizado: %c\n", c_upper, ft_tolower(c_updated));
// }

/*
! *************** FT_TOLOWER ***************

* Descripcion: Convierte un caracter en mayuscula a minuscula

*/