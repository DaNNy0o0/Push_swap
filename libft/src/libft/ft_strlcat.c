/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:05:28 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 20:23:29 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"


size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (!src && !dst)
		return (0);
	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && i + 1 < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
		dst[i] = '\0';
	while (src[j])
	{
		i++;
		j++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	dst[] = "12345";
// 	char	src[] = "abcdefghijklmnop";

// 	printf("%ld\n", ft_strlcat(dst, src, 10));
// 	printf("%s\n", dst);
// }

/*
! *************** FT_STRLCAT ***************

* La funcion anexa un string origen, terminado en NULL, al final de 
* un string destino
*
* Declaramos 3 variables:
*
*	dest_len, que va a contener la longitud del str destino
*	result_len, que va a contener la longitud final de ambos
*	*s, un puntero al inicio del str origen (src)
*
* Comprobamos si algunos de los strings es nulo o no es valido el tamano
* y retornamos 0 en caso de que asi sea
*
* Asignamos a s la referencia al index de src
*
* Inicializamos la longitud de dest_len en 0
*
* Iteramos, mientras que el puntero a la posicion resultante de la suma
* de la posicion actual de dst + dest_len NO sea NULL y dest_len sean menor
* que el tamano que recibimos. Asi hasta que no se cumpla la condicion del
* bucle y obtenemos la longitud de dst, la cual guardamos en dest_len
*
* Si esa longitud es menor que el tamano que recibimos, asignamos a result_len
* (la longitud final), la suma de la longitu de dest_len + la longitud de s 
* (el string origen)
*
* Si no fuese menor, retornamos el tamano que recibimos + la longitud de s 
* (el string origen)
*
* Mientras que el puntero a *s no sea NULO y que dest_len + 1 (para anadir el 
* nulo final) sea menor que el tamano que recibimos:
*
*	El puntero a la posicion de la suma de dst + dest_len tendra el mismo
*	caracter que al que esta apuntando s en ese momento. Pasamos a la siguiente
*	posicion de s y aumentamos 1 a dest_len
*
* Una vez terminado, anadimos a la posicion final el caracter nulo, para
* indicar el final de la cadena
*
* retornamos la longitud total
*
*
*
*
*
*
*
*
*
*
*
*
*
*
*
*/