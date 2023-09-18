# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 11:31:23 by bmartin           #+#    #+#              #
#    Updated: 2023/08/29 14:29:45 by siroulea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME =  push_swap

SRC = index.c			\
		main.c			\
		parsing.c		\
		push.c			\
		reverse_rotate.c\
		rotate.c		\
		sort.c 			\
		swap.c			\
		utils.c 		

OBJS = ${SRC:.c=.o}

CC = clang
CFLAGS = -Wextra -Wall -Werror

CLEAN = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(CLEAN) $(OBJS)
	$(CLEAN) *.o

fclean: clean
	$(CLEAN) $(NAME)

re: fclean all

visulizer:
	./push_swap_visualizer-master/build/bin/visualizer

visu: visulizer

leaks: all
	leaks -atExit -- ./push_swap 1 2 3 4 5 6

