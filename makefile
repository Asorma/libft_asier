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
# List of C source files
SRCS		=	 $(shell find . -name "*.c")

# OBJS
# List of object files generated from C source files
OBJS		=	$(SRCS:.c=.o)

# CC
# Compiler used to compile C source files
CC			=	gcc

# RM
# Command used to remove files
RM			=	rm -f

# CFLAGS
# Flags passed to the compiler when compiling C source files
CFLAGS		=	-Wall -Wextra -Werror

# NAME
# Name of the output library
NAME		=	libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus

