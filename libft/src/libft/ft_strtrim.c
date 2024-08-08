/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:15:30 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/08/08 17:37:20 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_start;
	char	*str_end;
	char	*str;
	int		len;

	if (!s1 || !set)
		return (ft_strdup(""));
	str_start = (char *)s1;
	str_end = str_start + ft_strlen(s1) - 1;
	while (*str_start && ft_strchr(set, *str_start))
		str_start++;
	while (str_end > str_start && ft_strchr(set, *str_end))
		str_end--;
	len = str_end - str_start + 2;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (0);
	ft_strlcpy(str, str_start, len);
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "   ++HOLA  ";
// 	char	set[] = " ";

// 	printf("%s\n", ft_strtrim(str, set));
// }

/*

! *************** FT_STRTRIM ***************

* Descripcion: Elimina los caracteres especificados de una cadena,
* al inicio y al final de la misma.

* Retorna un puntero a la cadena resultante final.
*
* Si s1 o set es NULL, o falla la asignacion de memoria o la cadena
* resultante esta vacia, retorna NULL
*

*/