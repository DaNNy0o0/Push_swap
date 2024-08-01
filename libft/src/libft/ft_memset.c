/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:12:13 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 20:23:29 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"


void	*ft_memset(void *s, int c, size_t n)
{
	void	*result;

	result = s;
	while (n-- > 0)
	{
		*(unsigned char *)s++ = (unsigned char)c;
	}
	return (result);
}

// int	main(void)
// {
//     char dest[10];
//     ft_memset(dest, 'A', sizeof(dest));
// 		printf("%s\n", dest);
//		return (0);
// }

/*
! *************** FT_MEMSET ***************

* Descripcion: Rellena un bloque de memoria con un valor
* especificado

* Declaramos un puntero, result, que apunta al mismo lugar
* en memoria que s.
*
* Iteramos mientras n sea mayor que 0, disminuyendo 1 a n 
* en cada iteracion,y vamos 
* asignando el caracter c al elemento al que apunta s en 
* ese mismo momento. Pasamos a la siguiente posicion de s y 
* volvemos a iterar.
*
* Retornamos el puntero result al acabar.
*
*
*
*
*

*/