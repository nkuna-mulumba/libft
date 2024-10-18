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

#include <stdlib.h>  // Inclui a biblioteca padrão para alocação de memória
#include <string.h>  // Inclui a biblioteca padrão para manipulação de strings
#include <stdio.h>   // Inclui a biblioteca padrão para entrada e saída

// Função que duplica uma string
char *ft_strdup(const char *s)
{
    if (s == NULL)  // Verifica se a string de entrada é NULL
    {
        return (NULL);  // Retorna NULL se a string de entrada for NULL
    }
    size_t len_s = 0;  // Inicializa a variável para armazenar o comprimento da string
    while (s[len_s] != '\0')  // Loop para calcular o comprimento da string
    {
        len_s++;  // Incrementa o comprimento da string
    }

    char *new_str = (char *)malloc(len_s + 1);  // Aloca memória para a nova string

    if (new_str == NULL)  // Verifica se a alocação de memória foi bem-sucedida
    {
        return NULL;  // Retorna NULL se a alocação de memória falhar
    }

    size_t i = 0;  // Inicializa a variável para o loop de cópia
    while (i < len_s)  // Loop para copiar cada caractere da string de entrada
    {
        new_str[i] = s[i];  // Copia o caractere da string de entrada para a nova string
        i++;  // Incrementa o índice
    }
    new_str[i] = '\0';  // Adiciona o caractere nulo ao final da nova string

    return (new_str);  // Retorna a nova string duplicada
}

int main()
{
    const char um[] = "Nkuna wa Mulumba";  // Define uma string constante
    char *nova_str = ft_strdup(um);  // Chama a função ft_strdup para duplicar a string
    if (nova_str == NULL)  // Verifica se a duplicação foi bem-sucedida
    {
        return (1);  // Retorna 1 se a duplicação falhar
    }
    else
    {
        printf("%s\n", nova_str);  // Imprime a nova string duplicada
    }
    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}

