# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-orma <ade-orma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 12:02:18 by ade-orma          #+#    #+#              #
#    Updated: 2023/01/18 17:40:35 by ade-orma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# SRCS
# List of C source files -> cool to use $(shell find . -name "*.c")
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \ 
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# OBJS
# List of object files generated from C source files
OBJS = $(SRCS:.c=.o)

# CC
# Compiler used to compile C source files
CC = gcc

# RM
# Command used to remove files
RM = rm -f

# CFLAGS
# Flags passed to the compiler when compiling C source files
CFLAGS = -Wall -Wextra -Werror

# NAME
# Name of the output library
NAME = libft.a

# all
# Compiles all object files and creates the library archive
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# clean
# Removes all object files
clean:
	$(RM) $(OBJS)

# fclean
# Removes all object files and the library archive
fclean: clean
	$(RM) $(NAME)

# re
# Removes all object files and the library archive and recompiles them
re: fclean all

.PHONY: all clean fclean re bonus


