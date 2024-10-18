# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/02 15:39:22 by jcongolo          #+#    #+#              #
#    Updated: 2024/10/02 18:00:22 by jcongolo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#Definições de variáveis
CC = gcc

# Flags de compilação
CFLAGS = -Wall -Werror -Wextra

# Arquivos fonte
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_tolower.c ft_toupper.c

# Arquivos objeto gerados a partir dos arquivos fonte
OBJS = $(SRCS:.c=.o)

# Nome do arquivo de saída
NAME = libft.a


# Regra padrão que compila tudo
all: $(NAME)

# Regra para criar o arquivo de saída a partir dos arquivos objeto
$(NAME): $(OBJS)
	ar -r $(NAME) $(OBJS)

# Regra para compilar arquivos .c em arquivos .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regra para limpar os arquivos objeto
clean:
	rm -f $(OBJS)

# Regra para limpar os arquivos objeto e o arquivo de saída
fclean: clean
	rm -f $(NAME)

# Regra para recompilar tudo do zero
re: fclean all

# Indica que estas regras não são arquivos reais
.PHONY: all clean fclean re

