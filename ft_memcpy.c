/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:54:11 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/22 18:55:02 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// Declaração da função ft_memcpy
void *ft_memcpy(void *dest, const void *src, size_t n);

int main()
{
    char destino[50];  // Array para armazenar a string de destino
    char origem[20];   // Array para armazenar a string de origem
    size_t bytes;      // Variável para armazenar o número de bytes a serem copiados

    // Solicita ao usuário que insira a string de origem
    printf("Introduza o nome a ser copiado para DESTINO: ");
    scanf("%s", origem);  // Lê a string de origem

    // Solicita ao usuário que insira o número de caracteres a serem copiados
    printf("Quantos caracteres necessitas copiar? ");
    scanf("%zu", &bytes);  // Lê o número de bytes

    // Chama a função ft_memcpy para copiar os bytes da origem para o destino
    ft_memcpy(destino, origem, bytes);
    destino[bytes] = '\0';  // Adiciona o terminador nulo à string de destino

    // Exibe a string copiada e o número de bytes copiados
    printf("Foi copiado: %s como caracteres na variável destino, segundo tamanho de %zu bytes introduzido.\n", destino, bytes);

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}

// Implementação da função ft_memcpy
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;  // Índice para iterar através dos bytes
    unsigned char *d;  // Ponteiro para o destino convertido para unsigned char
    const unsigned char *s;  // Ponteiro para a origem convertido para unsigned char

    d = (unsigned char *)dest;  // Converte o ponteiro de destino
    s = (const unsigned char *)src;  // Converte o ponteiro de origem
    for (i = 0; i < n; i++)  // Loop para copiar byte a byte
    {
        d[i] = s[i];  // Copia o byte da origem para o destino
    }
    return dest;  // Retorna o ponteiro de destino
}

