/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:36:51 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/04/09 11:36:51 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"


static int	count_digits(int n)
{
	int			i;

	i = 0;
	while (n / 10)
	{
		++i;
		n = n / 10;
	}
	++i;
	return (i);
}

static int	negative_numbers(int num)
{
	if (num < 0)
	{
		num = num * -1;
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	char		*final_str;
	int			i;
	int			sign;
	long int	num;

	num = n;
	sign = negative_numbers(num);
	if (sign)
		num = num * -1;
	i = count_digits(num) + sign;
	final_str = malloc(sizeof(char) * i + 1);
	if (!final_str)
		return (0);
	final_str[i] = 0;
	while (num >= 10)
	{
		final_str[--i] = (num % 10) + '0';
		num = num / 10;
	}
	final_str[--i] = num + '0';
	if (sign > 0)
		final_str[0] = '-';
	return (final_str);
}

// int main() {
// 	printf("%s\n", ft_itoa(-12345));
// }

/*

! *************** FT_ITOA ***************

* Descripcion: Convierte un entero a su representacion en forma de string

* ********* FUNCIONES **********

! ********* int	count_digits(int n) *********

* Recibe un int y cuenta los digitos que contiene

! ********* int	negative_numbers(int num) *********

* Recibe un caracter de tipo int y comprueba si es un numero negativo

! ********* char	*ft_itoa(int n) *********

* Recibe un numero entero y lo convierte a su representacion en forma de
* string, retornando un puntero a esa cadena, la cual tambien se crea
* en el proceso

* ********* PASOS *********

* Declaramos 4 variables:

!	*final_str: Puntero que va a contener la referencia a la cadena final
	
!	int i: Entero que va a contener el numero de digitos que vamos a 
!	manejar

!	- int sign: Entero que maneja el signo

!	- long int num: Entero de tipo que maneja el numero recibido

* Asignamos el valor de num a n, para manejar el valor recibido

* Asignamos a sign el resultado de negative_numbers(num). Si num
* es un numero negativo, asignamos a sign el valor de 1, sino 0.

* Si sign es = 1, significa que estamos manejando un numero negativo, 
* con lo que multiplicamos num * -1 para quitarle el signo.
*
* Asignamos a i el resultado de pasar a la fn de count_digits(num) +
* sign (1 en caso de ser negativo, para dejar el hueco al signo)
*
* Asignamos el espacio en memoria a final_str con malloc, multiplicando
* i (numero de digitos) * sizeof(char) (Tamano de cada int, 4) y le 
* sumamos 1 (para asignar el nulo final)

* Retornamos 0 en caso de fallo de asignacion
*
* Inicializamos la ultima posicion de final_str en 0
*
* Mientras que num sea mayor o igual que 10:
*
*	- Recorremos final_str desde el final y vamos asignando
*	el resultado de (num % 10) + '0', para convertirlo en un dato
*	de tipo char.
*
*	- Dividimos num / 10, para retirar ese ultimo int, y volvemos
*	a iterar (mientras num sea >= 10)
*
* Una vez que salgamos del bucle, final_str[--i] se encuentra 
* apuntando a la primera posicion (o penultima en el caso de 
* ser negativo), con lo que asignamos el 
* resultado de (num % 10) + '0' a la priemra posicion, 
* para convertirlo en un dato de tipo char 

* Si el numero era negativo sign vale 1, con lo que asignamos a la 
* primera posicion (final_str[0]) el signo '-'

* Retornamos final_str, el puntero al string final ya convertido

*/
