/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/03/21 20:45:05 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/03/21 20:45:05 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ptr;

	i = 0;
	if (!s || !f)
		return (0);
	ptr = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// char	func(unsigned int i, char c)
// {
// 	c += i;
// 	return (c);
// }

// int	main(void)
// {
// 	char	str[] = "aaaaaa";

// 	printf("%s\n", ft_strmapi(str, &func));
// }

/*
! *************** FT_STRMAPI ***************

* La funcion aplica una funcion f a cada caracter de un string, creando
* una nueva cadena. Al acabar, retorna una cadena con el resultado final
*


*/
