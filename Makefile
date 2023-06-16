# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inde-la- <inde-la-@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/07 14:11:36 by inde-la-          #+#    #+#              #
#    Updated: 2023/06/16 19:22:32 by inde-la-         ###   ########.fr        #
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
		  ft_strlcat.c \
		  ft_bzero.c \
		  ft_strnstr.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_tolower.c \
		  ft_toupper.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_atoi.c \
		  ft_calloc.c \
		  ft_strdup.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_split.c \
		  ft_itoa.c \
		  ft_strmapi.c \
		  ft_striteri.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putnbr_fd.c

BONUS	= ft_lstnew.c \
		  ft_lstadd_front.c \
		  

INC		= libft.h

OBJS	= $(SRCS:%.c=%.o)

CC		= cc

FLAGS	= -Wall -Werror -Wextra

$(NAME):
		$(CC) $(FLAGS) -c $(SRCS) -I $(INC)
	   	ar rc $(NAME) $(OBJS)	

all:	$(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

.PHONY: re all clean fclean

re: clean all