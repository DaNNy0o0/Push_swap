/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:38:46 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/08/08 17:36:05 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n-- > 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "abcdefgehijk";
// 	char	c;

// 	c = 'e';
// 	printf("%s\n", (char *)ft_memchr(str, c, sizeof(str)));
// }

/*
! *************** FT_MEMCHR ***************

* Descripcion: Busca la primera aparicion de un caracter
* en un bloque de memoria

* La funcion toma un puntero al bloque de memoria s, el
* caracter que vamos a buscar y el numero de bytes en los
* que vamos a buscar
*
* Entramos en el bucle que itera n veces, disminuyendo en cada
* iteracion (Los bytes en los que vamos a buscar). Disminuimos
* 1 a n en cada iteracion.
*
* Comprobamos si el byte del bloque de memoria al que estamos
* apuntando con *s (pasando el tipo de data a char), es el
* mismo que el caracter c que estamos buscando.
*
* Si es igual, retornamos el puntero actual a ese byte en el
* bloque de memoria
*
* Si no se encuentra coincidencia, retornamos NULL
*
*

*/