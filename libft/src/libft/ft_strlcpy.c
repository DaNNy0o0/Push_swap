/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:39:56 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 20:23:29 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"


size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	src_len;

	src_len = ft_strlen(src);
	if (!dst && !src)
		return (0);
	while (*src != '\0' && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	if (size > 0)
		*dst = '\0';
	return (src_len);
}

// int	main(void)
// {
// 	char	dst[] = "abcdefghijklmnop";
// 	char	src[] = "12345";

// 	ft_strlcpy(dst, src, sizeof(src));
// 	printf("%s\n", dst);
// 	printf("%d\n", ft_strlen(src + 1));
// }

/*
! *************** FT_STRLCPY ***************

* La funcion copia una cadena desde el origen al destino
* con un limite de tamano especificado y retorna la longitud
* de la cadena origen
* 
* Declaramos una variable src_len, que guaradara la longitud del
* string origen (src)
*
* Si src o dst son nulos, retornamos 0
*
* Mientras que la posicion en esa iteracion de src no sea nulo y 
* que el tamano que recibimos para copiar sea mayor a 1, asignamos
* a la posicion actual de dst el mismo caracter que haya en esa posicion
* en src en esa iteracion y pasamos a la siguiente posicion en ambos 
* para continuar el bucle, restando 1 al size en cada iteracion
*
* Una vez terminado, queda un espacio, con lo que asignamos el nulo
* a la ultima posicion de dst
*
* Retornamos la longitud de src
*
*/