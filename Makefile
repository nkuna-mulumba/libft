# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/02 15:07:09 by jcongolo          #+#    #+#              #
#    Updated: 2024/10/22 14:48:16 by jcongolo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_atoi.c ft_atol.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c\
		ft_memcpy.c ft_memmove.c ft_memset.c ft_strdup.c ft_strlcat.c\
		ft_strchr.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c\
		ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c\
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
		ft_putchar_fd.c ft_putstr_fd.c	ft_putendl_fd.c ft_putnbr_fd.c\
		ft_valid_argument.c
OBJS = $(SRCS:.c=.o)
NAME = libft.a
all: $(NAME)
$(NAME): $(OBJS)
		ar -rcs $(NAME) $(OBJS)
%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@
clean:
		rm -f $(OBJS)
		rm -f $(NAME)
fclean: clean
		rm -f $(NAME)
		rm -f $(OBJS)
re: fclean all
.PHONY: all clean fclean re
