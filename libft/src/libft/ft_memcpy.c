/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:47:20 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/08/08 17:36:11 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*result;

	result = dest;
	if (!dest && !src)
	{
		return (dest);
	}
	while (n-- > 0)
	{
		*(char *)dest++ = *(char *)src++;
	}
	return (result);
}

// int	main(void)
// {
// 	char	src[] = "Hola!";
// 	char	dest[50];

// 	ft_memcpy(dest, src, sizeof(src) - 1);

// 	printf("El contenido de dest es: %s\n", dest);

// 	return (0);
// }

/*
! *************** FT_MEMCPY ***************

* Descripcion: Copia n bytes de 1 bloque de memoria (src) a otro (dest)
* y retorna un puntero al bloque de memoria destino. Los bloques
* de memoria no se deben sobreponer.
*
* Declaramos 1 puntero result, que apuntara al mismo lugar que dest,
* para asi manejar el resultado final

* Si el puntero a destino o el puntero al origen son Nulos, retornamos
* el puntero al destino
*
* Iteramos, disminuyendo 1 a n en cada iteracion, y vamos copiando
* el caracter al que apuntamos en ese momento desde src a dest y
* pasamos a la siguiente posicion en ambos.
*
* Finalmente, retornamos un puntero a result, que apunta a dest.
*
*
*

*/