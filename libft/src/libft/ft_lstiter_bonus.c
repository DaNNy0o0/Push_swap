/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:01:30 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 20:23:29 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"


void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// // Función de impresión que será pasada a ft_lstiter

// void	print_content(void *content)
// {
// 	printf("Content: %s\n", (char *)content);
// }

// int	main(void)
// {
// 	t_list	*lst;

// 	lst = ft_lstnew("Hello");
// 	ft_lstadd_back(&lst, ft_lstnew("World"));
// 	ft_lstiter(lst, print_content);
// }

/*
! *************** FT_LSTITER ***************

* Descripcion: Itera los elementos de una lista y aplica
* una funcion a cada uno de ellos

* Toma un puntero al primer elemento de una lista y a una
* funcion, la cual sera aplicada a cada uno.

* Si uno de los 2 punteros es NULL, acaba la ejecucion
*
* Si no son nulos, iteramos sobre cada elemento de la lista,
* aplicando la funcion al contenido del elemento actual en esa
* iteracion

* Una vez aplicada, avanzamos el puntero al siguiente elemento,
* mediante lst->next

*/
