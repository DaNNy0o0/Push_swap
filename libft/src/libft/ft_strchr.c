/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:29:44 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/08/08 17:36:42 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	if ((char)c == 0)
		return (str);
	return (0);
}

// int	main(void)
// {
// 	char	str[] = "Bienvenido";
// 	char	c;

// 	c = 'e';
// 	printf("%s\n", ft_strchr(str, c));
// }

/*


!	FT_STRCHR

* Encuentra la primera ocurrencia de un caracter
* en un string y retorna un puntero a esa posicion
* o NULL si no lo encuentra


*/