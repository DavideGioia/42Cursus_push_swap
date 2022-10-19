# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 17:09:56 by dgioia            #+#    #+#              #
#    Updated: 2022/09/24 17:09:56 by dgioia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

CC		=	gcc

CFLAGS	=	-Wall

SRC	=	src/push_swap.c \
		src/msg.c \
		src/check_args.c \
		src/list.c \
		src/utils.c \
		src/moves_a.c \
		src/moves_b.c \
		src/moves_ab.c \
		src/moves_support.c \
		src/sort.c \
		src/lis.c \
		src/sort_3n.c \
		src/find.c \
		src/calculate_moves.c

OBJ	=	$(SRC:.c=.o)

LIBFT = libft/libft.a

RM		=	rm -rf

%.o: %.c
			$(CC) ${CFLAGS} -g -c $< -o $@

$(NAME):	$(OBJ)
			make -C ./libft
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

all:		$(NAME)

clean:
			${RM} $(OBJ)

fclean: 	clean
			${RM} $(NAME) ${OBJ}

re:			fclean all

.PHONY:		all clean fclean re