# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiaz-to <ddiaz-to@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/16 15:08:28 by ddiaz-to          #+#    #+#              #
#    Updated: 2024/07/31 20:20:23 by ddiaz-to         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a

INC				= includes/
SRC_DIR			= src/
OBJ_DIR			= obj/

CC				= gcc
CFLAGS			= -Wall -Wextra -Werror -I
RM				= rm -f
AR				= ar rcs

LIBFT_DIR =		$(SRC_DIR)libft/ft_isalnum.c \
				$(SRC_DIR)libft/ft_isalpha.c \
				$(SRC_DIR)libft/ft_isascii.c \
				$(SRC_DIR)libft/ft_isdigit.c \
				$(SRC_DIR)libft/ft_isprint.c \
				$(SRC_DIR)libft/ft_bzero.c \
				$(SRC_DIR)libft/ft_calloc.c \
				$(SRC_DIR)libft/ft_memchr.c \
				$(SRC_DIR)libft/ft_memcmp.c \
				$(SRC_DIR)libft/ft_memmove.c \
				$(SRC_DIR)libft/ft_memcpy.c \
				$(SRC_DIR)libft/ft_memset.c \
				$(SRC_DIR)libft/ft_putchar_fd.c \
				$(SRC_DIR)libft/ft_putendl_fd.c \
				$(SRC_DIR)libft/ft_putnbr_fd.c \
				$(SRC_DIR)libft/ft_putstr_fd.c \
				$(SRC_DIR)libft/ft_atoi.c \
				$(SRC_DIR)libft/ft_itoa.c \
				$(SRC_DIR)libft/ft_tolower.c \
				$(SRC_DIR)libft/ft_toupper.c \
				$(SRC_DIR)libft/ft_split.c \
				$(SRC_DIR)libft/ft_strchr.c \
				$(SRC_DIR)libft/ft_strdup.c \
				$(SRC_DIR)libft/ft_striteri.c \
				$(SRC_DIR)libft/ft_strjoin.c \
				$(SRC_DIR)libft/ft_strlcat.c \
				$(SRC_DIR)libft/ft_strlcpy.c \
				$(SRC_DIR)libft/ft_strlen.c \
				$(SRC_DIR)libft/ft_strmapi.c \
				$(SRC_DIR)libft/ft_strncmp.c \
				$(SRC_DIR)libft/ft_strncpy.c \
				$(SRC_DIR)libft/ft_strnstr.c \
				$(SRC_DIR)libft/ft_strrchr.c \
				$(SRC_DIR)libft/ft_strtrim.c \
				$(SRC_DIR)libft/ft_substr.c \
				$(SRC_DIR)libft/ft_lstadd_back_bonus.c \
				$(SRC_DIR)libft/ft_lstadd_front_bonus.c \
				$(SRC_DIR)libft/ft_lstclear_bonus.c \
				$(SRC_DIR)libft/ft_lstdelone_bonus.c \
				$(SRC_DIR)libft/ft_lstiter_bonus.c \
				$(SRC_DIR)libft/ft_lstlast_bonus.c \
				$(SRC_DIR)libft/ft_lstmap_bonus.c \
				$(SRC_DIR)libft/ft_lstnew_bonus.c \
				$(SRC_DIR)libft/ft_lstsize_bonus.c \
				$(SRC_DIR)libft/ft_strcmp.c 

FTPRINTF_DIR	=	$(SRC_DIR)ft_printf/ft_print_numbers.c \
					$(SRC_DIR)ft_printf/ft_print_words.c \
					$(SRC_DIR)ft_printf/ft_printf.c \

GNL_DIR			=	$(SRC_DIR)get_next_line/get_next_line.c \
					$(SRC_DIR)get_next_line/get_next_line_utils.c \

SRC 			= $(LIBFT_DIR) $(FTPRINTF_DIR) $(GNL_DIR)

OBJ 			= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRC))

all: 			$(NAME)

$(NAME): 		$(OBJ)
				@$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
				@mkdir -p $(@D)
				@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
				@$(RM) -r $(OBJ_DIR)
				@$(RM) .cache_exists

fclean: 		clean
				@$(RM) $(NAME)

re: 			fclean all

.PHONY: 		all clean fclean re