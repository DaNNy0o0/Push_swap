/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:56:13 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 20:23:29 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*result;
	size_t	str_len;

	str_len = ft_strlen(s);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	else if (len + start > str_len)
		substr = (char *)malloc((str_len - start + 1) * sizeof(char));
	else
		substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	result = substr;
	while (*(s + start) && len-- > 0)
		*substr++ = *(s + start++);
	*substr = 0;
	return (result);
}

// int	main(void)
// {
// 	char	str[] = "abcdefgehijk";
// 	char	*substr;

// 	substr = ft_substr(str, 5, 3);
// 	printf("%s\n", substr);
// }

/*

! *************** FT_SUBSTR ***************

* Descripcion: Toma una cadena, un punto de inicio y una longitud y
* devuelve una subcadena que comienza desde el punto de inicio indicado
* y que tiene la longitud elegida.

*/