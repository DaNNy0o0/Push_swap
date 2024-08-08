/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:48:49 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/08/08 17:35:40 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*new;

// 	lst = ft_lstnew("Hello");
// 	new = ft_lstnew("World");
// 	ft_lstadd_front(&lst, new);
// }

/*

! *************** FT_LSTADD_FRONT ***************

* Descripcion: Añade un nuevo elemento al principio de
* una lista enlazada

! *************** FT_LSTADD_FRONT ***************

* La función ft_lstadd_front toma un puntero al puntero
* al primer elemento de una lista enalzada (lst) y un puntero
* al elemento que se va a agregar (new).

* Comprueba si lst o new son NULL. En ese caso, se corta la
* ejecucion con u nreturn
*
* Si no son nulos, asignamos el puntero next del elemento new al
* puntero del primer elemento actual de la lista, para que apunte
* a ese primer elemento

* Actualizamos el puntero al primer elemento para que apunte a new,
* convirtiendolo en el nuevo primer elemento de la lista.


*/