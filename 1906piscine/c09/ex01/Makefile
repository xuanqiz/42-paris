# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xzhao <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/22 20:28:35 by xzhao             #+#    #+#              #
#    Updated: 2019/06/24 21:31:03 by xzhao            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PATH = ./srcs/

SRCS = ft_putchar.c ft_swap.c ft_putstr.c \
		ft_strlen.c ft_strcmp.c

ALLSRCS = $(addprefix $(PATH), $(SRCS))

PHEADER = ./includes/

FLAGS = -Wall -Wextra -Werror

OBJS = ${ALLSRCS:.c=.o}

all: $(NAME)

.c.o:	
		gcc $(FLAGS) -I $(PHEADER) -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		 ar rc $(NAME) $(OBJS)

clean:
		/bin/rm -f $(OBJS)
fclean: clean
		/bin/rm -f $(NAME)
re:
	fclean all
