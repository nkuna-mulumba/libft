/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:42:16 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/19 18:52:10 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Este arquivo é o cabeçalho para a biblioteca personalizada libft.
** Ele contém os protótipos de todas as funções implementadas na biblioteca,
** bem como as bibliotecas padrão necessárias para suporte.
*/

#ifndef LIBFT_H // Início da proteção de inclusão
# define LIBFT_H // Definir a proteção de inclusão

# include <ctype.h> // Para funções de tipo de caractere
# include <string.h> // Para funções de manipulação de strings
# include <stdlib.h> // Para alocação de memória, conversão, e mais
# include <unistd.h> // Para funções padrão do Unix
# include <fcntl.h> // Para opções de controle de arquivos
# include <stdio.h> // Para funções de entrada/saída
# include <stddef.h> // Para definições padrão

// Protótipos das funções
int     ft_atoi(const char *nptr); // Converte uma string para um inteiro
void    ft_bzero(void *s, size_t n); // Define um bloco de memória com zero
void    *ft_calloc(size_t nmemb, size_t size); // Aloca e inicializa array com zero
int     ft_isalnum(int c); // Verifica se o caractere é alfanumérico
int     ft_isalpha(int c); // Verifica se o caractere é alfabético
int     ft_isascii(int c); // Verifica se o caractere é ASCII
int     ft_isdigit(int c); // Verifica se o caractere é um dígito
int     ft_isprint(int c); // Verifica se o caractere é imprimível
void    *ft_memchr(const void *s, int c, size_t n); // Localiza um byte em um bloco de memória
int     ft_memcmp(const void *s1, const void *s2, size_t n); // Compara dois blocos de memória
void    *ft_memcpy(void *dest, const void *src, size_t n); // Copia um bloco de memória
void    *ft_memmove(void *dest, const void *src, size_t n); // Move um bloco de memória
void    *ft_memset(void *s, int c, size_t n); // Define um bloco de memória com um valor
char    *ft_strchr(const char *s, int c); // Localiza um caractere em uma string
size_t  ft_strlcat(char *dst, const char *src, size_t size); // Concatena duas strings com limite de tamanho
size_t  ft_strlcpy(char *dst, const char *src, size_t size); // Copia uma string com limite de tamanho
size_t  ft_strlen(const char *s); // Calcula o comprimento de uma string
int     ft_strncmp(const char *s1, const char *s2, size_t n); // Compara duas strings com limite de tamanho
char    *ft_strnstr(const char *big, const char *little, size_t len); // Localiza uma substring em uma string
char    *ft_strrchr(const char *s, int c); // Localiza a última ocorrência de um caractere em uma string
int     ft_tolower(int c); // Converte um caractere para minúsculo
int     ft_toupper(int c); // Converte um caractere para maiúsculo
char    *ft_strdup(const char *s); // Duplicar uma string
char    *ft_substr(char const *s, unsigned int start, size_t len); // Extrai uma substring
char    *ft_strjoin(char const *s1, char const *s2); // Junta duas strings
char    *ft_strtrim(char const *s1, char const *set); // Remove caracteres de uma string
char    **ft_split(char const *s, char c); // Divide uma string em um array de strings
char    *ft_itoa(int n); // Converte um inteiro para uma string
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char)); // Aplica uma função a cada caractere de uma string
void    ft_striteri(char *s, void (*f)(unsigned int, char *)); // Aplica uma função a cada caractere de uma string com seu índice
void    ft_putchar_fd(char c, int fd); // Escreve um caractere para um descritor de arquivo
void    ft_putstr_fd(char *s, int fd); // Escreve uma string para um descritor de arquivo
void    ft_putendl_fd(char *s, int fd); // Escreve uma string para um descritor de arquivo com uma nova linha
void    ft_putnbr_fd(int n, int fd); // Escreve um inteiro para um descritor de arquivo

#endif // Fim da proteção de inclusão


