/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:25:09 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 20:23:29 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"


int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	printf("Resultado: %d", ft_isalpha('F'));
}*/

/*
! *************** FT_ISALPHA ***************

* Descripcion: Comprueba si un caracter es una letra mayuscula 
*						 o una letra minuscula.

* Retorna 1 si es true o 0 si es false (No lo es)


*/