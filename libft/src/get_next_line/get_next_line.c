/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:37:41 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/07/31 20:23:01 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/get_next_line.h"

// ! ***************** FIND_NEW_LINE() **************************

ssize_t	find_new_line(char *str)
{
	ssize_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

// ! ***************** JOIN_READ_DATA() **************************

char	*join_read_data(char *store, char *buffer)
{
	char	*result;
	size_t	store_length;
	size_t	buffer_length;

	store_length = ft_strlen_gnl(store);
	buffer_length = ft_strlen_gnl(buffer);
	result = (char *)malloc(sizeof(char) * (store_length + buffer_length + 1));
	if (!result)
		return (NULL);
	if (store)
	{
		ft_strcpy_gnl(result, store);
		free(store);
	}
	if (buffer)
		ft_strcpy_gnl(&result[store_length], buffer);
	return (result);
}

// ! ***************** DIVIDE_STRINGS() **************************

char	*divide_strings(char **store)
{
	char	*final_output;
	char	*new_store;
	ssize_t	new_line;
	size_t	length;

	new_line = find_new_line(*store);
	if (new_line == -1)
		length = ft_strlen_gnl(*store);
	else
		length = new_line + 1;
	final_output = (char *)malloc(sizeof(char) * (length + 1));
	if (!final_output)
		return (NULL);
	ft_strncpy_gnl(final_output, *store, length);
	if (new_line != -1)
		new_store = ft_strdup_gnl(&(*store)[new_line + 1]);
	free(*store);
	*store = NULL;
	if (new_line != -1)
		*store = new_store;
	return (final_output);
}

// ! ***************** GET_NEXT_LINE() **************************

char	*get_next_line(int fd)
{
	static char	*store;
	char		*buffer;
	ssize_t		bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	while (1)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes <= 0)
			break ;
		buffer[bytes] = '\0';
		store = join_read_data(store, buffer);
		if (find_new_line(store) >= 0)
			break ;
	}
	free(buffer);
	if (bytes < 0 || !store || !*store)
		return (free(store), store = NULL, NULL);
	return (divide_strings(&store));
}
