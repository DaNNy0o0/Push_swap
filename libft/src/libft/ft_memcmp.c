/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:55:42 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 20:23:29 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"


int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1_char;
	unsigned char	*str2_char;

	str1_char = (unsigned char *)s1;
	str2_char = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*str1_char != *str2_char)
			return (*str1_char - *str2_char);
		str1_char++;
		str2_char++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[] = "abcdefg";
// 	char	s2[] = "abcdddd";

// 	printf("%d\n", ft_memcmp(s1, s2, 5));
// }

/*
! *************** FT_MEMCMP ***************

* La funcion ft_memcmp compara bos bloques de memoria
* y devuelve la diferencia entre el primer byte diferente
* o devuelve 0 si son iguales
* 
* Declaramos 1 puntero que va a apuntar al primer byte del bloque
* de memoria de s1 y convertimos el tipo de dato a char
* 
* Hacemos lo mismo con s2
* 
* Entramos en el bucle que itera n veces, disminuyendo en cada
* iteracion (Los bytes en los que vamos a buscar). Disminuimos
* 1 a n en cada iteracion.
* 
* Si los caracteres son iguales en ese iteracion, pasando a la siguiente
* posicion en ambos y volvemos a iterar
* 
* Si el caracter apuntado en esa iteracion en s1 NO es igual al de s2,
* retornamos la diferencia entre los dos bytes.
* 
* Si son iguales, retornamos 0
* 
* 

*/