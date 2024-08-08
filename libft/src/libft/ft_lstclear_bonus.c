/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:50:14 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/08/08 17:35:44 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst && *lst)
	{
		while (*lst)
		{
			tmp = *lst;
			*lst = (*lst)->next;
			ft_lstdelone(tmp, del);
		}
		*lst = 0;
	}
}

// /*********************************************************
//  * Función para eliminar el contenido de un nodo
//  *********************************************************/

// // void	del_content(void *content)
// // {
// // 	free(content);
// // }

// // int    main(void)
// // {
// //     t_list *lst = ft_lstnew(strdup("Hello"));
// //     ft_lstadd_back(&lst, ft_lstnew(strdup("World")));

// //     printf("Lista creada:\n");
// //     t_list *tmp = lst;
// //     while (tmp)
// //     {
// //         printf("%s\n", (char *)tmp->content);
// //         tmp = tmp->next;
// //     }

// //     printf("\nLimpiando lista...\n");
// //     ft_lstclear(&lst, del_content);

// //     printf("Lista después de limpiarla:\n");
// //     tmp = lst;
// //     while (tmp)
// //     {
// //         printf("%s\n", (char *)tmp->content);
// //         tmp = tmp->next;
// //     }

// //     return (0);
// // }

/*
! *************** FT_LSTCLEAR ***************

* Descripcion: Desasigna la memoria ocupada por una lista
* y sus elementos, mientras que utiliza una funcion del usuario
* para liberar el contenido de cada elemento.

* PASOS *

* La funcion toma 2 parametros:

!	t_list **lst: Puntero al puntero al primer elemento de la lista
!	void (*del)(void *): Puntero a funcion "del" que usaremos para
! 	liberar la memoria del contenido de cada elemento

* Iniciamos un puntero tmp de tipo t_list que va a contener
* la referencia a *lst

* Si lst y *lst NO son nulos:

*	Entramos en el bucle mientras *lst NO sea nulo:

*		- Asignamos a tmp = *lst.
*		- Asignamos a *lst = (*lst)->next, para que apunte
*		al siguiente elemento
*		- Eliminamos el elemento actual al que apuntamos
*		con tmp, gracias a la fn ft_lstdelone y le pasamos
*		como argumentos tmp y la funcion del (fn que libera
*		la memoria asignada a ese elemento)

* Al llegar al ultimo elemento, asignamos a *lst el 0.

*/