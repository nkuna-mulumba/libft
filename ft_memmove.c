/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:44:37 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/23 16:45:07 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca personalizada libft

/*
** A função ft_memmove move n bytes da área de memória src para a área de memória dest.
** Retorna um ponteiro para dest.
*/
void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d; // Declara um ponteiro d para a área de memória de destino
    const unsigned char *s; // Declara um ponteiro s para a área de memória de origem
    size_t i; // Declara uma variável i para uso no loop

    d = (unsigned char *)dest; // Converte o ponteiro de destino para unsigned char
    s = (const unsigned char *)src; // Converte o ponteiro de origem para unsigned char

    // Se o destino está antes da origem na memória
    if (d < s)
    {
        i = 0; // Inicializa i com 0
        // Loop para copiar os bytes de src para dest
        while (i < n)
        {
            d[i] = s[i]; // Copia o byte de src para dest
            i++; // Incrementa i
        }
    }
    else // Se o destino está depois da origem na memória
    {
        i = n; // Inicializa i com n
        // Loop para copiar os bytes de src para dest de trás para frente
        while (i > 0)
        {
            i--; // Decrementa i
            d[i] = s[i]; // Copia o byte de src para dest
        }
    }

    return (dest); // Retorna o ponteiro de destino
}
/*
int main()
{
    char src[] = "Exemplo de teste"; // String de origem
    char dest[20]; // String de destino com espaço suficiente

    // Chama ft_memmove para mover src para dest
    ft_memmove(dest, src, sizeof(src));

    // Imprime a string movida
    printf("String movida: %s\n", dest);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/