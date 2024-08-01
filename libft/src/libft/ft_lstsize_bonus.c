/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:09:54 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 20:23:29 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"


int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

// int	main(void)
// {
// 	t_list	*list1;
// 	t_list	*list2;
// 	t_list	*list3;

// 	list1 = ft_lstnew("abcde");
// 	list2 = ft_lstnew("12345");
// 	list3 = ft_lstnew("!@#$");
// 	list1->next = list2;
// 	list2->next = list3;
// 	printf("%d\n", ft_lstsize(list1));
// }

/*
! *************** FT_LSTSIZE ***************

* Descripcion: Cuenta los elementos de una lista y
* retorna el numero de ellos

*/