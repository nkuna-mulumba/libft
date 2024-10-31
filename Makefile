# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/02 15:39:22 by jcongolo          #+#    #+#              #
#    Updated: 2024/10/19 18:54:40 by jcongolo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc                  # Compilador a ser usado
CFLAGS = -Wall -Werror -Wextra  # Flags de compilação, para avisos e erros rigorosos
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c\  # Lista dos arquivos fonte
        ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
        ft_memmove.c ft_memset.c ft_strdup.c ft_strlcat.c ft_strchr.c\
        ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c\
        ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c\
        ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
        ft_putstr_fd.c  ft_putendl_fd.c ft_putnbr_fd.c
OBJS = $(SRCS:.c=.o)     # Lista dos arquivos objeto
NAME = libft.a           # Nome da biblioteca gerada

all: $(NAME)             # Regra padrão para construir a biblioteca
$(NAME): $(OBJS)         # Cria a biblioteca se os arquivos objeto estiverem atualizados
        ar -rcs $(NAME) $(OBJS)  # Comando para criar a biblioteca estática
%.o: %.c                 # Regras de compilação para arquivos objeto a partir dos arquivos fonte
        $(CC) $(CFLAGS) -c $< -o $@
clean:                   # Regra para limpar os arquivos objeto
        rm -f $(OBJS)
fclean: clean            # Regra para limpar arquivos objeto e a biblioteca
        rm -f $(NAME)
re: fclean all           # Regra para reconstruir tudo
.PHONY: all clean fclean re  # Declaração das regras "falsas"

