/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:04:49 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 20:23:29 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"


char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*result;

	str = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	result = str;
	while (*s1)
		*str++ = *s1++;
	*str = 0;
	return (result);
}

// int	main(void)
// {
// 	char	str[] = "abcdefg";
// 	char	*new;

// 	new = ft_strdup(str);
// 	printf("%s\n", new);
// }

/*

!	FT_STRDUP

* Crea una copia de un string y retorna un puntero a esa copia

* Declaramos 2 punteros de tipo char
*
*	str, para recorrer y copiar del string original (s1)
*	result, para guardar la referencia al inicio de la copia resultante
*	(str)
*
* Asignamos el espacio en memoria para realizar la copia y comprobamos
* que se ha asignado correctamente
*
* Asignamos a result la referencia a str, para guardar el puntero al inicio
*
* Mientras que el elemento al que apunta s1 en ese iteracion no sea nulo, 
* vamos asignando/copiando los mismos caracteres en la misma posicion en 
* str. Cuando llega a la ultimo posicion, asignamos el nulo
*
* Retornamos un puntero a result (guarda la referencia al inicio de str)

*/
