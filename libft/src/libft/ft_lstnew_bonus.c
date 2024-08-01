/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:16:52 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 20:23:29 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"


t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int	main(void)
// {
// 	t_list	*new;

// 	new = ft_lstnew("abcde");
// 	printf("%s\n", (char *)new->content);
// }

/*
! *************** FT_LSTNEW ***************

* Descripcion: Crea un nuevo elemento y le asigna el contenido
* pasado a la funcion

* La funcion recibe un puntero al contenido que vamos a asignar
* al nuevo elemento
*
* Creamos un puntero a un nuevo elemento
*
* Asgignamos el espacio en memoria para el nuevo elemento,
* mediante el uso de malloc, calculando el espacio necesario
* para el tama;o de una t_list
*
* Si no se pudo asignar, retornamos NULL
*
* Si se asgino sin problema, asignamos el content al contenido
* del elemento new que acabamos de crear
*
* Establecemos el puntero al siguiente elemento en NULL, indicando
* que no hay mas elementos
*
* retornamos un puntero al elemento recien creado
*
*/