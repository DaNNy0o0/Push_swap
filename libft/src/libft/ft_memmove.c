/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:42:33 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/08/08 17:36:15 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*result;

	result = dest;
	if (!dest && !src)
		return (dest);
	if (dest == src)
		return (result);
	if (dest > src)
	{
		while (n-- > 0)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else
	{
		while (n-- > 0)
			*(char *)dest++ = *(char *)src++;
	}
	return (result);
}

// int	main(void)
// {
// 	char	dst[] = "abcdefghijklmnop";
// 	char	src[] = "12345";
// 	char	dst1[7];
// 	char	src1[] = "54321";

// 	memmove(dst, src, sizeof(src) - 1);
// 	printf("%s\n", dst);
// 	ft_memmove(dst1, src1, sizeof(src1) - 1);
// 	printf("%s\n", dst1);
// }

/*
! *************** FT_MEMMOVE ***************

* Descripcion: Copia n bytes de 1 bloque de memoria (src) a otro (dest)
* y retorna un puntero al destino, controlando que las regiones se .
* superpongan
*
* Declaramos 1 puntero result, que apuntara al mismo lugar que dest,
* para asi manejar el resultado final
*
* Comprobamos si el puntero dest o src son nulos. Si lo son, retornamos
* el puntero a dest, ya que no seria una operacion valida
*
* Comprobamos si el puntero dest o src son iguales, lo que indicaria que
* los bloques de memoria se sobreponen, por lo que no hay que realizar
* copia. Se retorna el puntero a result
*
* Si el puntero de destino es mayor que el de origen, significa que los
* bloques no se sobreponen y se puede copiar de forma segura.
*
* Comenzamos a iterar n veces, restando 1 a n en cada iteracion, copiando
* el byte en la posicion n de dest, desde la posicion n de src, dando a
* ambos el mismo valor. Asi vamos copiando desde el final.
*
* Si dest no es mayor que src, vamos copiando desde el inicio y avanzamos
* una posicion en cada puntero en cada iteracion, para ir copiando
* byte a byte hasta que n llegue a 0.
*/