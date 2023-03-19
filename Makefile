# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-orma <ade-orma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 12:02:18 by ade-orma          #+#    #+#              #
#    Updated: 2023/01/18 17:40:35 by ade-orma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#VARIABLES
FT_IS 		= 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c 

FT_STR		=	ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
				ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
				ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_strtrim.c
				
FT_MEM		=	ft_bzero.c ft_calloc.c ft_memchr.c ft_memcpy.c \
				ft_memcmp.c ft_memmove.c  ft_memset.c

FT_PUT		=	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c

FT_TO		=	ft_atoi.c ft_itoa.c ft_tolower.c ft_toupper.c

FT_BON		=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c

# SRCS
# List of C source files -> cool to use $(shell find . -name "*.c")
SRCS = $(FT_IS) $(FT_STR) $(FT_MEM) $(FT_PUT) $(FT_TO)

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

#ar Archive Replace
#rcs Replace Create Index(Symbol)
#ar rcs creates a library archive libft.a and adds the created .c files
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

#.PHONY makes possible to all actions (rules) to be executed
.PHONY: all clean fclean re bonus
