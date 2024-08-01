/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:50:09 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 20:23:29 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"


void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*final_ptr;

	final_ptr = malloc(nmemb * size);
	if (!final_ptr)
		return (0);
	else
	{
		ft_bzero(final_ptr, nmemb * size);
		return (final_ptr);
	}
	return (0);
}

// int main() {
//     size_t nmemb = 2;
//     size_t size = 5;

//     void *ptr = ft_calloc(nmemb, size);

//     if (ptr == NULL) {
//         printf("Fallo al asignar memoria\n");
//         return (1);
//     }

//     printf("Memoria asignada correctamente\n");

//     // Test the memory block
//     for (size_t i = 0; i < nmemb * size; i++) {
//         if (((char *)ptr)[i] != 0) {
//             printf("Fallo al iniciar memoria\n");
//             return (1);
//         }
//     }

//     printf("Memoria iniciada correctamente\n");

//     free(ptr);
//     return (0);
// }

/*

! *************** FT_CALLOC ***************

*	Inicializa un bloque de memoria para un array, inicializando
* 	cada elemento en 0

* La funcion toma 2 parametros:
*
*	- nmemb: Numero de elementos
*	- size: Tamano de cada elemento
*
* Iniciamos un puntero que va a contener la referencia al bloque de 
* memoria que vamos a crear.
*
* Asignamos la memoria con malloc, con el tamano del numero de 
* elementos * tamano de cada uno
*
* Si no se pudo asignar, retornamos 0 y cortamos la ejecucion
*
* Si no hubo problema de asignacion, usamos la fn ft_bzero, pasandole 
* el puntero/referencia al bloque que acabamos de crear y el tamano
* que necesitamos, para que establezca cada bit a 0
*
* Retornamos el puntero a ese bloque ya iniciado
*/