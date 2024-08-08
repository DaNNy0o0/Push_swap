/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:05:33 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/08/08 17:36:54 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	char	*joinstr;
	int		joinstr_len;

	joinstr_len = ft_strlen(s1) + ft_strlen(s2);
	joinstr = (char *)malloc((joinstr_len + 1) * sizeof(char));
	result = joinstr;
	if (!s1 || !s2 || !joinstr)
		return (NULL);
	while (joinstr_len-- > 0)
	{
		if (*s1)
			*joinstr++ = *s1++;
		else if (*s2)
			*joinstr++ = *s2++;
	}
	*joinstr = 0;
	return (result);
}

// int	main(void)
// {
// 	char	str1[] = "Bienvenido ";
// 	char	str2[] = "a 42";

// 	printf("%s\n", ft_strjoin(str1, str2));
// }

/*
! *************** FT_STRJOIN ***************

* Concatena 2 strings en uno nuevo y retorna un puntero a
* esa nueva cadena (o NULL si falla algo)
*
* Declaramos 3 variables:
*
*	Un puntero result que guardara la referencia al inicio
* 	del string concatenado final
*
*	Un puntero joinstr en el que vamos a ir copiando cada
*	caracter de los strings originales
*
*	Un int joinstr_len que guaradara la longitud del string
*	concatenado
*
* Asignamos a joinstr_len la longitud total de la suma de ambos str
*
* Asignamos el espacio a joinstr necesario para contener el string
* resultante final
*
* Asignamos a result el mismo valor que joinstr, para guardar la
* referencia al comienzo
*
* Si no se pudo asignar la memoria o algun string es nulo, retornamos NULL
*
* Mientras que la longitud total de ambos (joinstr_len) sea mayor que 0:
*
*	Si el puntero a s1 en esa iteracion no es nulo, asignamos a joinstr
*	el mismo caracter que tenga s1 en esa posicion
*
*	Una vez acabamos de copiar desde s1, hacemos los mismo con s2
*
* Al acabar de copiar ambos, asignamos el nulo final
*
* Retornamos el puntero a result, que contiene la referencia al index de joinstr


*/
