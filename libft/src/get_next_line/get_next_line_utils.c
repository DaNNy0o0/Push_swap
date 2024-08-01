/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:37:37 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 20:22:56 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/get_next_line.h"

size_t	ft_strlen_gnl(char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i] != 0)
		i++;
	return (i);
}

void	ft_strcpy_gnl(char *dst, char *src)
{
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
}

void	ft_strncpy_gnl(char *dst, char *src, size_t n)
{
	while (n-- && *src)
		*dst++ = *src++;
	*dst = '\0';
}

char	*ft_strdup_gnl(char *src)
{
	char	*new;

	new = (char *)malloc(sizeof(char) * ft_strlen_gnl(src) + 1);
	if (!new)
		return (NULL);
	ft_strcpy_gnl(new, src);
	return (new);
}
