# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inde-la- <inde-la-@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/07 14:11:36 by inde-la-          #+#    #+#              #
#    Updated: 2023/06/19 20:19:46 by inde-la-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COLORS

WHITE = \033[0;37m
RED = \033[0;31m
GREEN = \033[0;32m

NAME	= libft.a
INC		= libft.h

CC		= cc
AR = ar
ARFLAGS = crs
FLAGS	= -Wall -Werror -Wextra
RM = rm
RMFLAG = -f

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
		  ft_putnbr_fd.c \
		  ft_putendl_fd.c \

BONUS	= ft_lstnew_bonus.c \
		  ft_lstadd_front_bonus.c \
		  
OBJS	= $(SRCS:.c=.o)
OBJS_BONUS = $(SRC_BONUS: .c=.o)

%.o: %.c $(INC)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	   	$(AR) $(ARFLAGS) $(NAME) $(OBJS)	
		@echo "$(GREEN)Files compiled!$(WHITE)"

bonus: $(OBJS_BONUS)
	   	$(AR) $(ARFLAG) $(NAME) $(OBJS_BONUS)
		@echo "$(GREEN)Bonus compiled!$(WHITE)"

all:	$(NAME)

clean:
		$(RM) $(RMFLAG) $(OBJS) $(OBJS_BONUS)
		@echo "Wait a minute...$(GREEN)Removed!$(WHITE)"

fclean: clean
		$(RM) $(RMFLAG) $(NAME)
		@echo "Wait a minute...$(GREEN)Removed!$(WHITE)"

re: fclean all

.PHONY: re all clean fclean