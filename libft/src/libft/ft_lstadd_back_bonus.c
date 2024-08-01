/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:34:55 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 20:23:29 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"


void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}

/*

* MAIN COMPLEJO*

// void print_list(t_list *lst)
// {
//     while (lst != NULL)
//     {
//         printf("%d ", lst->content);
//         lst = lst->next;
//     }
//     printf("\n");
// }

// int main(void)
// {
//     // Creamos algunos nodos de lista
//     t_list *node1 = malloc(sizeof(t_list));
//     t_list *node2 = malloc(sizeof(t_list));
//     t_list *node3 = malloc(sizeof(t_list));

//     // Asignamos valores a los nodos
//     node1->content = 1;
//     node2->content = 2;
//     node3->content = 3;

//     // Inicializamos el siguiente de cada nodo a NULL
//     node1->next = NULL;
//     node2->next = NULL;
//     node3->next = NULL;

//     // Creamos una lista y la inicializamos con el primer nodo
//     t_list *list = node1;

//     // Agregamos nodos adicionales al final de la lista
//     ft_lstadd_back(&list, node2);
//     ft_lstadd_back(&list, node3);

//     // Imprimimos la lista para verificar
//     printf("Lista después de agregar nodos:\n");
//     print_list(list);

//     // Liberamos la memoria asignada a los nodos
//     free(node1);
//     free(node2);
//     free(node3);

//     return 0;
// }

* MAIN SIMPLE *

// int	main(void)
// {

// t_list *lst = ft_lstnew("Hello");
// t_list *new = ft_lstnew("World");
// ft_lstadd_back(&lst, new);

//     return (0);
// }

*/

/*
! *************** FT_LSTADD_BACK ***************

* Descripcion: Añade un nuevo elemento al final de
* una lista enlazada

! *************** FT_LSTADD_BACK ***************

* La función ft_lstadd_back toma un puntero al puntero
* al primer elemento de una lista enalzada (lst) y un puntero
* al elemento que se va a agregar (new).

* Declaramos un puntero temporal, para asignar despues el valor
* del puntero del primer elemento (*lst)

* Comprueba si lst o new son NULL. En ese caso, se corta la
* ejecucion con u nreturn
*
* Comprobamos si el puntero al primer elemento de la lista es NULL.
* Si lo fuese, significa que la lista esta vacia. En este caso,
* asignamos el elemento new al puntero al primer (y unico) elemento
* de la lista y retornamos.
*
* Si la lista no esta vacia, inicializamos el puntero temp con el valor
* del puntero del primer elemento
*
* Recorremos la lista con un bucle hasta llegar al ultimo elemento (NULL),
*
* Dentro del bucle vamos actualizando el puntero temp para qye vaya
* apuntando al siguiente elemento en cada iteracion
*
* Una vez se alcance el ultimo elemento, se asigna el elemento new
* al puntero "next" del ultimo elemento de la lista, para agregarlo
* en la ultima posicion.


*/
