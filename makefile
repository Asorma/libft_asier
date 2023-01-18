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

SRCS		=	 $(shell find . -name "*.c")
#				ft_isalpha.c \
#				ft_isdigit.c \
#				ft_isalnum.c \
#				ft_isascii.c \
#				ft_isprint.c \
#				ft_toupper.c \
#				ft_atoi.c \
#				ft_tolower.c \
#				ft_strlen.c \
#				ft_strlcpy.c \
#				ft_strlcat.c \
#				ft_strchr.c \
#				ft_strrchr.c \
#				ft_strncmp.c \
#				ft_strnstr.c \
#				ft_memset.c \
#				ft_bzero.c \
#				ft_memcpy.c \
#				ft_memmove.c \
#				ft_strrchr.c \
#				ft_memchr.c \
#				ft_memcmp.c \
#				ft_calloc.c \
#				ft_strup.c \
#				ft_substr.c \
#				ft_strjoin.c \
#				ft_strtrim.c \
#				ft_split.c \
#				ft_itoa.c \
#				ft_strmapi.c \
#				ft_striteri.c \
#				ft_putchar_fd.c \
#				ft_putstr_fd.c \
#				ft_putendl_fd.c \
#				ft_putnbr_fd.c
#				$(shell find . -name "*.c")



OBJS		=	$(SRCS:.c=.o)


CC			=	gcc
RM			=	rm -f
CFLAGS		=	-Wall -Wextra -Werror

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
