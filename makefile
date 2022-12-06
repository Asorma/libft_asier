# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 12:02:18 by ade-orma          #+#    #+#              #
#    Updated: 2022/12/06 12:02:25 by ade-orma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
CFLAGS		=	-Wextra -Wall -Werror
AR			=	ar
ARFLAGS		=	rc
LIB			=	ft_isalnum.c	\

#	Objects
OBJS		= $(LIB:%.c=%.o)

################
##   COLORS   ##
################

Y			=	"\033[33m"
R			=	"\033[31m"
G			=	"\033[32m"
B			=	"\033[34m"
X			=	"\033[0m"
UP			=	"\033[A"
CUT			=	"\033[K"

#################
##  TARGETS    ##
#################

#	First target
all:	$(NAME)

#	Compiler
CC	= gcc
RM	= @/bin/rm -f
%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)
$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	ranlib $(NAME)

#	Removing objects
clean:
			@echo ${B}Cleaning ${X}${R}${OBJS}${X}
			$(RM) $(OBJS)

#	Removing objects and exe
fclean:		clean
			@echo ${B}Cleaning ${X}${R}${NAME}${X}
			$(RM) $(NAME)

#	All removing then compiling
re:			fclean all

.PHONY:		all clean fclean re
