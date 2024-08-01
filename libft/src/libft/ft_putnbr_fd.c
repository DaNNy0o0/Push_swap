/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:16:21 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 20:23:29 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"


void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = (long)n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	if (num > 9)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putchar_fd('0' + num % 10, fd);
	}
	else
	{
		ft_putchar_fd('0' + num, fd);
	}
}

// int	main(void)
// {
// 	ft_putnbr_fd(-450, 1);
// }

/*
! *************** FT_PUTNBR_FD ***************

* Escribe un int en el fd especificado

* La funcion recibe un int n (el numero a escribir) y otro
* int fd (el file descriptor en el que lo vamos a escribir)
*
* Declaramos una variable num, de tipo long, para manejar
* numeros grandes y le damos el mismo valor que n (pasando
* este a tipo long tambien)
*
* Si el numero es menor que 0, significa que es negativo
* con lo que escribimos en el fd el signo - y pasamos el numero
* num a positivo (-*- = +)
*
* Si el numero es mayor a 9, usamos recursividad para a la función
* ft_putnbr_fd con los argumentos num / 10 y fd. Básicamente,se trata
* de dividir el número por 10 e imprimir el cociente.
*
* A continuacion, imprime el resto de num dividido por 10 como un solo dígito. 
* La expresión '0' + num % 10 convierte el dígito en su representación ASCII 
* (por ejemplo, 0 se convierte en '0', 1 se convierte en '1', etc.).
*
* Si num es menor o igual que 9, se imprime num como un caracter
*
*/