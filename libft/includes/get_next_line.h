/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:33:47 by ddiaz-to          #+#    #+#             */
/*   Updated: 2024/06/03 19:54:03 by ddiaz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

// Reads and return next line from a File Descriptor
char	*get_next_line(int fd);

// Find '\n' character in a string and return its index
ssize_t	find_new_line(char *str);

// Join a stored string (store) with readed buffer (buffer)
char	*join_read_data(char *store, char *buffer);

// Divide stored string (store) until '\n' character inclusive, and
// adjust 'store' to contain remainder of the string
char	*divide_strings(char **store);

// ! *********** UTILS ************

// Calculate length of a string and return it
size_t	ft_strlen_gnl(char *s);

// Copy a source string in a dest string
void	ft_strcpy_gnl(char *dst, char *src);

// Copy n bytes from a source string in a dest string
void	ft_strncpy_gnl(char *dst, char *src, size_t n);

// Duplicate a string allocating memory for the new string 
// and copying the source string into it
char	*ft_strdup_gnl(char *src);

#endif