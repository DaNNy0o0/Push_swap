/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:38:53 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/08/08 17:35:26 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	printf("Resultado: %d", ft_isdigit(50));
}*/

/*
! *************** FT_ISDIGIT ***************

* Descripcion: Comprueba si un caracter es un numero

* Retorna 1 si es true o 0 si es false (No lo es)


*/