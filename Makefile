#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erli <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 16:17:09 by erli              #+#    #+#              #
#    Updated: 2018/11/07 18:09:22 by erli             ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	test

SRCS	=	testlibc.c		\
			ft_strlen.c		\
			ft_strdup.c		\
			ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memccpy.c	\
			ft_memmove.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strcpy.c		\
			ft_strncpy.c	\
			ft_strcat.c		\
			ft_strncat.c	\
			ft_strlcat.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strstr.c		\
			ft_strnstr.c	\
			ft_strcmp.c		\
			ft_strncmp.c	\
			ft_atoi.c		\
			ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_toupper.c	\
			ft_tolower.c	

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

CFLAG	=	-Wall -Werror -Wextra


all		:
		@make $(NAME)

$(NAME)	:	$(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

delsav	:
		rm -f *~

clean	:
		rm -f *.o

fclean	:
		rm $(NAME)

re		: clean fclean all

reset	: clean delsav fclean