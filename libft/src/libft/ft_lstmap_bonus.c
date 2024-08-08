/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:06:14 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/08/08 17:35:56 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*element;
	t_list	*new;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		content = f(lst->content);
		element = ft_lstnew(content);
		if (!element)
		{
			free(content);
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, element);
		lst = lst->next;
	}
	return (new);
}

// static void	*func(void *content)
// {
// 	int		i;
// 	char	*temp;

// 	temp = (char *)content;
// 	while (temp[i])
// 		temp[i++] += 1;
// 	return (temp);
// }

// static void	del(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*list1;
// 	t_list	*list2;
// 	t_list	*list3;
// 	t_list	*newlist;

// 	list1 = ft_lstnew(ft_strdup("abcde"));
// 	list2 = ft_lstnew(ft_strdup("12345"));
// 	list3 = ft_lstnew(ft_strdup("!@#$"));
// 	list1->next = list2;
// 	list2->next = list3;
// 	newlist = ft_lstmap(list1, &func, &del);
// 	while (newlist)
// 	{
// 		printf("%s\n", (char *)newlist->content);
// 		newlist = newlist->next;
// 	}
// }

/*
! *************** FT_LSTMAP ***************

* Descripcion: Crea una nueva, aplicando una funcion
* a cada elmento de una lista ya existente. Despues,
* se crea una nueva lista con Los elementos
* transformados resultantes.
*
*
*
*

*/