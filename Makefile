#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erli <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 16:17:09 by erli              #+#    #+#              #
#    Updated: 2018/11/06 17:15:45 by erli             ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	test

SRCS	=	testlibc.c		\
			ft_strlen.c		\
			ft_strdup.c		\
			ft_memset.c	


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