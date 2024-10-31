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

#include "libft.h" // Inclui o cabeçalho da biblioteca personalizada libft

/*
** A função ft_memcpy copia n bytes da área de memória src para a área de memória dest.
** Retorna um ponteiro para dest.
*/
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i; // Declaração de um índice para o loop
    unsigned char *d; // Declaração de um ponteiro para a área de memória de destino
    const unsigned char *s; // Declaração de um ponteiro constante para a área de memória de origem

    // Se dest e src forem ambos NULL, retorna NULL
    if (!dest && !src)
        return (NULL);

    d = (unsigned char *)dest; // Converte dest para unsigned char *
    s = (const unsigned char *)src; // Converte src para const unsigned char *

    i = 0; // Inicializa o índice com 0
    // Copia n bytes de src para dest
    while (i < n)
    {
        d[i] = s[i]; // Copia o byte atual de src para dest
        i++; // Incrementa o índice
    }
    return (dest); // Retorna o ponteiro para dest
}
/*
int main()
{
    char src[] = "Exemplo de teste"; // String de origem a ser copiada
    char dest[20]; // Array de destino com espaço suficiente para a string copiada

    // Chama ft_memcpy para copiar src para dest
    ft_memcpy(dest, src, sizeof(src));

    // Imprime a string copiada para verificar se a cópia foi bem-sucedida
    printf("String copiada: %s\n", dest);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/