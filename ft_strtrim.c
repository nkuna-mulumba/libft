/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:31:27 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/16 16:26:32 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Objetivo principal: A função ft_strtrim remove todos os caracteres da string 'set' do início e do fim da string 's1' até encontrar um caractere que não pertença ao 'set'.

char *ft_strtrim(char const *s1, char const *set)
{
    size_t inicio; // Índice para o início da string
    size_t fim;    // Índice para o fim da string
    char *sub_s1;  // Ponteiro para a substring resultante

    // Verifica se s1 ou set são nulos
    if (!s1 || !set)
    {
        return (NULL); // Retorna NULL se s1 ou set forem nulos
    }

    inicio = 0; // Inicializa o índice de início
    // Incrementa o índice de início enquanto os caracteres de s1 estiverem em set
    while (s1[inicio] && ft_strchr(set, s1[inicio]))
    {
        inicio++;
    }

    fim = strlen(s1); // Inicializa o índice de fim com o comprimento de s1
    // Decrementa o índice de fim enquanto os caracteres de s1 estiverem em set
    while (fim > inicio && ft_strchr(set, s1[fim - 1]))
    {
        fim--;
    }

    // Cria a substring resultante usando ft_substr para alocar a memoria e string do meio
    sub_s1 = ft_substr(s1, inicio, fim - inicio);
    return (sub_s1); // Retorna a substring resultante
}

int main()
{
    const char *string = "nPapan"; // String de entrada
    const char *set = "n";         // Conjunto de caracteres a serem removidos
    char *substring = ft_strtrim(string, set); // Chama a função ft_strtrim

    // Verifica se a substring foi criada com sucesso
    if (substring)
    {
        printf("%s\n", substring); // Imprime a substring resultante
        free(substring);           // Libera a memória alocada para a substring
    }
    else
    {
        return (0); // Retorna 0 se a substring não foi criada
    }
    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}

