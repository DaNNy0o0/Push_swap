/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:43:31 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/08/08 17:34:59 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A'
			&& c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	printf("Resultado: %d", ft_isalnum('6'));
}*/

/*

! *************** FT_ISALNUM ***************

* Descripcion: Comprueba si un caracter es un numero,
*				una letra mayuscula o una letra minuscula.

* Retorna 1 si es true o 0 si es false (No lo es)


*/