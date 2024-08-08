/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:55:38 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/08/08 17:35:30 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	printf("Resultado: %d", ft_isprint(69));
}*/

/*
! *************** FT_ISPRINT ***************

* Descripcion: Comprueba si un caracter es un imprimible en pantalla

* Retorna 1 si es true o 0 si es false (No lo es)


*/