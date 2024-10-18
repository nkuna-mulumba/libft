/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:01:29 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/10 17:04:32 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca personalizada "libft.h"

/* A função ft_substr cria uma substring a partir de uma string original.
 Ela recebe como parâmetros a string original (s), o índice de início (start) e o comprimento da substring (len).
A função retorna a substring criada ou NULL em caso de erro.
*/

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  s_len; // Declara uma variável para armazenar o comprimento da string original
    char    *sub_s; // Declara um ponteiro para a substring
    size_t  i; // Declara uma variável para o índice

    if (!s) // Verifica se a string original é nula
        return (NULL); // Retorna NULL se a string original for nula
    s_len = ft_strlen(s); // Calcula o comprimento da string original
    if (start >= s_len) // Verifica se o índice de início está fora do comprimento da string
        return (ft_strdup("")); // Retorna uma string vazia se o índice de início estiver fora do comprimento
    if (len > s_len - start) // Ajusta o comprimento da substring se necessário
        len = s_len - start; // Define o comprimento da substring para o restante da string original
    sub_s = (char *)malloc(len + 1); // Aloca memória para a substring
    if (!sub_s) // Verifica se a alocação de memória falhou
        return (NULL); // Retorna NULL se a alocação de memória falhar
    i = 0; // Inicializa o índice
    while (i < len && s[start + i]) // Copia os caracteres da string original para a substring
    {
        sub_s[i] = s[start + i]; // Copia o caractere
        i++; // Incrementa o índice
    }   
    sub_s[i] = '\0'; // Adiciona o caractere nulo ao final da substring
    return (sub_s); // Retorna a substring
}

int main()
{
    const char  *string = "Hola mundo"; // Declara uma string original
    char    *sub_string = ft_substr(string, 5, 4); // Cria uma substring a partir da string original
    if (sub_string) // Verifica se a substring foi criada com sucesso
    {
        printf("Substring tem como valor :%s:\n", sub_string); // Imprime a substring
    }   
    else
    {
        return (0); // Retorna 0 se a substring não foi criada com sucesso
    }   
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

