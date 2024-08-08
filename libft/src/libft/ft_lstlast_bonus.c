/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:30:08 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/08/08 17:35:53 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
	{
		return (NULL);
	}
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list *lst = ft_lstnew("Hello");
// 	ft_lstadd_back(&lst, ft_lstnew("World"));
// 	t_list *last_elem = ft_lstlast(lst);

// 	// Liberar la memoria asignada a la lista lst
//     while (lst)
//     {
//         t_list *temp = lst;
//         lst = lst->next;
//         free(temp);
//     }

// 	return (0);
// }

/*
! *************** FT_LSTLAST ***************

* Descripcion: Devuelve un puntero al ultimo elemento
* de una lista enlazada



*/