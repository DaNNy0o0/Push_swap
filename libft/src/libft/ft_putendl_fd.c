/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:13:54 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/08/08 17:36:24 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

/*int	main(void)
{
	ft_putendl_fd("abcde", 1);
	ft_putendl_fd("12345", 1);
}*/

/*
! *************** FT_PUTENDL_FD ***************

* Descripcion: Escribe una cadena en el file descriptor

* Comprobamos si el file descriptor es valido, verificando
* Si es menor que 0 y si el puntero s no es NULL.

* En la mayoría de los sistemas operativos tipo Unix,
* los descriptores de archivo negativos no son válidos
* para operaciones de E/S estándar.
*/