/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:43:17 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/08/08 17:35:47 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}

// // Función de eliminación de contenido para tipos de datos simples
// void simple_del(void *content) {
//     // Para este ejemplo, supongamos que content es simplemente un entero
//     int *ptr = (int *)content;
//     printf("Eliminando contenido: %d\n", *ptr);
//     free(ptr); // Liberar memoria asignada para el contenido
// }

// int main() {
//     // Crear un nodo de lista con contenido de tipo entero
//     t_list *node = (t_list *)malloc(sizeof(t_list));
//     int *data = (int *)malloc(sizeof(int));
//     *data = 42; // Valor de ejemplo
//     node->content = data;
//     node->next = NULL;

//     // Llamar a ft_lstdelone para eliminar el nodo
//     printf("Antes de eliminar el nodo:\n");
//     printf("Contenido del nodo: %d\n", *((int *)node->content));
//     ft_lstdelone(node, simple_del);
//     printf("Después de eliminar el nodo:\n");
//     // Se intentará acceder al contenido del nodo,
//		lo que puede ser inseguro ya que el nodo ya no existe.
//     // printf("Contenido del nodo: %d\n", *((int *)node->content));
// Esto sería un comportamiento indefinido

//     return (0);
// }

/*
! *************** FT_LSTDELONE ***************

* Descripcion: Desasigna la memoria ocupada por un solo
* elemento de una lista, mediante el uso de una funcion
* pasada por el usuario para liberar el contenido de ese
* elemento

* La función ft_lstdelone toma un puntero a un elemento de una
* lista enlazada (lst) y un puntero de función 'del' que apunta a
* una función responsable de liberar la memoria del contenido de
* ese elemento de lista.

* Comprobamos si los punteros a lst o del son NULL
*
* Si no lo son, llamamos a la funcion del para liberar el contenido
* del elemento
*
* Despues de liberar el contenido, usamos free() para desasignar
* la memoria de ese elemento
*

*/