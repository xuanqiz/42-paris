# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xzhao <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/22 19:30:23 by xzhao             #+#    #+#              #
#    Updated: 2019/11/01 14:41:13 by xzhao            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c\
			ft_bzero.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_itoa.c\
			ft_memccpy.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putnbr_fd.c\
			ft_putendl_fd.c\
			ft_strdup.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlen.c\
			ft_strlcpy.c\
			ft_strchr.c\
			ft_split.c\
			ft_strmapi.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_substr.c\
			ft_strtrim.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_calloc.c\

SRC_B = ft_lstnew_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstmap_bonus.c\

FLAGS = -Wall -Wextra -Werror -c

INC = libft.h

OBJS = $(SRC:%.c=%.o)

OBJS_B = $(SRC_B:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJS) $(INC)
	ar rcs $(NAME) $(OBJS)

$(OBJS) : $(SRC)
	gcc $(FLAGS) $(SRC) -I $(INC)

$(OBJS_B) : $(SRC_B) 
	gcc $(FLAGS) $(SRC_B) -I $(INC)

bonus : fclean $(OBJS) $(OBJS_B)
	ar rcs $(NAME) $(OBJS) $(OBJS_B)

clean :
	rm -f $(OBJS) $(OBJS_B)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: re, clean, fclean, all

/*
** instead write Flags = 3W -I, write include seperately
** and then add dependency
** so that when we mmake changes in libft.h
** it will make again every time
*/
