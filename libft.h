/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:42:16 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/02 15:51:03 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H // Se LIBFT_H não estiver definido
# define LIBFT_H // Define LIBFT_H para evitar inclusões múltiplas
# include <ctype.h> // Inclui a biblioteca ctype.h para funções de manipulação de caracteres
# include <string.h> // Inclui a biblioteca string.h para funções de manipulação de strings
# include <stdlib.h> // Inclui a biblioteca stdlib.h para funções de alocação de memória e conversão

int		ft_atoi(const char *nptr); // Converte uma string para um inteiro
void	ft_bzero(void *s, size_t n); // Zera n bytes da memória apontada por s
void	*ft_calloc(size_t nmemb, size_t size); // Aloca memória para um array de nmemb elementos de size bytes cada e inicializa com zero
int		ft_isalnum(int c); // Verifica se o caractere é alfanumérico
int		ft_isalpha(int c); // Verifica se o caractere é alfabético
int		ft_isascii(int c); // Verifica se o caractere está dentro da tabela ASCII
int		ft_isdigit(int c); // Verifica se o caractere é um dígito
int		ft_isprint(int c); // Verifica se o caractere é imprimível
void	*ft_memchr(const void *s, int c, size_t n); // Procura o caractere c nos primeiros n bytes da memória apontada por s
int		ft_memcmp(const void *s1, const void *s2, size_t n); // Compara os primeiros n bytes das áreas de memória s1 e s2
void	*ft_memcpy(void *dest, const void *src, size_t n); // Copia n bytes da memória apontada por src para dest
void	*ft_memmove(void *dest, const void *src, size_t n); // Move n bytes da memória apontada por src para dest, áreas podem se sobrepor
void	*ft_memset(void *s, int c, size_t n); // Preenche os primeiros n bytes da memória apontada por s com o byte c
char	*ft_strchr(const char *s, int c); // Procura o caractere c na string s
char	*ft_strdup(const char *s); // Duplica a string s
size_t	ft_strlcat(char *dst, const char *src, size_t size); // Concatena a string src na string dst, garantindo que o resultado seja nulo-terminado
size_t	ft_strlcpy(char *dst, const char *src, size_t size); // Copia a string src para dst, garantindo que o resultado seja nulo-terminado
size_t	ft_strlen(const char *s); // Calcula o comprimento da string s
int		ft_strncmp(const char *s1, const char *s2, size_t n); // Compara as strings s1 e s2 até n caracteres
char	*ft_strnstr(const char *big, const char *little, size_t len); // Procura a substring little na string big até len caracteres
char	*ft_strrchr(const char *s, int c); // Procura a última ocorrência do caractere c na string s
int		ft_tolower(int c); // Converte o caractere c para minúsculo, se possível
int		ft_toupper(int c); // Converte o caractere c para maiúsculo, se possível
#endif // Fim da verificação de inclusão múltipla

