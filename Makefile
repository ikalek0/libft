# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inde-la- <inde-la-@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/07 14:11:36 by inde-la-          #+#    #+#              #
#    Updated: 2023/06/07 14:16:41 by inde-la-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= libft.a

SRCS	= ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_strlen.c \
		  ft_strlcpy.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_strncmp.c \
		  ft_memset.c \
		  ft_strlcat.c 

INC		= libft.h

OBJS	= $(SRCS:%.c=%.o)

CC		= gcc

FLAGS	= -Wall -Werror -Wextra

$(NAME):
		$(CC) $(FLAGS) -c $(SRCS) -I $(INC)
	   	ar rc $(NAME) $(OBJS)	

all:	$(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)