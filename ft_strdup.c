/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 22:24:43 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/01 22:24:56 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca personalizada "libft.h"

/*
** A função ft_strdup duplica a string 's' e retorna um ponteiro para a nova string.
** Se a string de entrada for NULL, a função retorna NULL.
*/
char *ft_strdup(const char *s)
{
    // Verifica se a string de entrada é NULL
    if (s == NULL)
    {
        return (NULL); // Retorna NULL se a string de entrada for NULL
    }

    size_t len_s = 0; // Inicializa a variável para armazenar o comprimento da string

    // Loop para calcular o comprimento da string
    while (s[len_s] != '\0')
    {
        len_s++; // Incrementa o comprimento da string
    }

    // Aloca memória para a nova string
    char *new_str = (char *)malloc(len_s + 1);
    if (new_str == NULL) // Verifica se a alocação de memória foi bem-sucedida
    {
        return (NULL); // Retorna NULL se a alocação de memória falhar
    }

    size_t i = 0; // Inicializa a variável para o loop de cópia

    // Loop para copiar cada caractere da string de entrada
    while (i < len_s)
    {
        new_str[i] = s[i]; // Copia o caractere da string de entrada para a nova string
        i++; // Incrementa o índice
    }

    new_str[i] = '\0'; // Adiciona o caractere nulo ao final da nova string
    return (new_str); // Retorna a nova string duplicada
}
/*
int main()
{
    const char str[] = "Esta é uma string de exemplo."; // String de exemplo
    char *duplicada = ft_strdup(str); // Chama ft_strdup para duplicar a string

    // Verifica se a duplicação foi bem-sucedida
    if (duplicada != NULL)
    {
        // Imprime a string duplicada
        printf("String duplicada: %s\n", duplicada);
        // Libera a memória alocada para a string duplicada
        free(duplicada);
    }
    else
    {
        // Imprime uma mensagem de erro se a duplicação falhar
        printf("Erro: Falha ao duplicar a string.\n");
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/