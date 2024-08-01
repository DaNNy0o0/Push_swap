/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:10:35 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 20:23:29 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"


char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char		*c_little;
	char		*final_result;
	size_t		i;

	if (!*little)
		return ((char *)big);
	c_little = (char *)little;
	i = 0;
	while (*big && *c_little && len != 0)
	{
		if (*big != *c_little++)
		{
			big -= i;
			len += i;
			c_little = (char *)little;
			i = 0;
		}
		else if (i++ == 0)
			final_result = (char *)big;
		big++;
		len--;
	}
	if (i == ft_strlen((char *)little))
		return (final_result);
	return (0);
}

// int	main(void)
// {
// 	char	str[] = "Bienvenido a 42";
// 	char	find[] = "enido a 42";

// 	printf("%s\n", ft_strnstr(str, find, 30));
// }

/*
! *************** FT_STRNSTR ***************

* La funcion busca la primera ocurrencia de un substring dentro
* de un string, hasta una longitud especificada
*
* Si se encuentra ocurrencia, retorna un puntero a esa posicion
*
* Si no se encuentra o n es 0, retorna NULL
*

*/