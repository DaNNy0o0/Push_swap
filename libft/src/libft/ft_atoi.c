/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:03:57 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 20:23:29 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"


static int	check_special_chars_or_space(int c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
	{
		return (1);
	}
	return (0);
}

static int	check_digit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	final_num;
	int	check;
	int	sign;

	final_num = 0;
	sign = 1;
	while (*nptr && check_special_chars_or_space(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr && check_digit(*nptr))
	{
		check = final_num;
		final_num = final_num * 10 + sign * (*nptr - 48);
		if (final_num > check && sign < 0)
			return (0);
		if (final_num < check && sign > 0)
			return (-1);
		nptr++;
	}
	return (final_num);
}

/*
// int	main(void)
// {
// 	char	str[] = "-1535abcd";

// // !	Desbordamiento negativo
// 	char	overf_neg[] = "-2147483649";

// // !	Desbordamiento positivo
// 	char	overf_pos[] = "2147483649";

// 	printf("%i\n", ft_atoi(str));
// 	printf("Desborde por debajo del INT_MIN: %i\n", ft_atoi(overf_neg));
// 	printf("Desborde por encima del INT_MAX: %i\n", ft_atoi(overf_pos));
// }
*/

/*

! *************** FT_ATOI ***************

* Descripcion: Convierte una cadena de caracteres a valor entero

* ********* FUNCIONES **********

! ********* check_special_chars_or_space(int c) *********

* Recibe un caracter de tipo int y comprueba si es un caracter especial
* o un espacio

! ********* check_digit(int c) *********

* Recibe un caracter de tipo int y comprueba si es un numero o no

! ********* ft_atoi(const char *str) *********

* Recibe un puntero a una cadena de caracteres y la convierte en una cadena
* de numeros enteros en su valor entero correspondiente

* ********* PASOS *********

* Declaramos 3 variables:

!	- int final_num: Entero que va a contener el numero final
	
!	- int check: Entero que guarda el valor previo de final_num, para 
!		comprobar situaciones de desborde

!	- int sign: Entero que maneja el signo

* Asignamos el valor de 0 a final_num y de 1 a sign (1 es positivo)
*
* Iteramos sobre *str hasta el final:
*	
*	- Comprobamos si el caracter al que apuntamos en cada iteracion NO es nulo
*	y si es un caracter especial o un espacio (Mediante el uso de la fn 
*	check_special_chars_or_space(int c))

!	En caso de que sea positvo, pasamos a la siguiente posicion de la cadena	

*	- Si la posicion actual es un signo "-" o "+": 
*
*		- "-": Multiplicamos sign * -1, para manejar un numero negativo
*		- "+": Pasamos a la siguiente posicion de la cadena
*
* Volvemos a iterar sobre *str hasta el final:
*	
*	- Comprobamos si el caracter al que apuntamos en cada iteracion NO es nulo
*	y si es un numero (Mediante el uso de la fn 
*	check_digit(int c))

	! En caso de que asi sea, entramos en el bucle

*	- Asignamos a check el valor actual de final_num (0 en la 1a iteracion), 
*	para mantener el valor anterior y evitar posibles desbordamientos
*
*	- Asignamos a final_num el valor entero del caracter al que estamos 
*	apuntando actualmente, restando su valor decimal en la tabla ascii - 48
*	(Posicion 0 en la tabla ASCII)

!		- Si final_num es MAYOR que check Y el signo es menor que 0 (negativo), 
!		significa que estamos desbordando por debajo del mayor entero permitido
!		(-2147483648). En tal caso, retornamos 0, indicando el 
!		desbordamiento negativo.

!		- Si final_num es MENOR que check Y el signo es mayor que 0 (positivo), 
!		significa que estamos desbordando por debajo del mayor entero permitido
!		(2147483647). En tal caso, retornamos -1, indicando el 
!		desbordamiento positivo.
*
*	- Si no caemos en los anteriores casos, pasamos a la siguiente posicion de
*	*str y volvemos a iterar
*
*	- Finalmente retornamos final_num, con el resultado final del int convertido
*

*/