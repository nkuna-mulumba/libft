/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:12:15 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/16 21:22:51 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** A função ft_strlcpy copia até size - 1 caracteres da string src para dst,
** e garante que a string resultante em dst seja nula terminada se size for maior que 0.
** Retorna o comprimento da string src.
*/
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i; // Declaração da variável 'i' para uso como índice
    size_t src_len; // Declaração da variável 'src_len' para armazenar o comprimento da string src

    i = 0; // Inicializa 'i' com 0
    src_len = 0; // Inicializa 'src_len' com 0
    
    // Loop para calcular o comprimento da string src
    while (src[src_len] != '\0')
    {
        src_len++; // Incrementa 'src_len' até encontrar o caractere nulo
    }
    
    // Verifica se o tamanho do buffer de destino não é zero
    if (size != 0)
    {
        // Loop para copiar a string de origem para o destino
        while ((i < size - 1) && (src[i] != '\0'))
        {
            dst[i] = src[i]; // Copia o caractere da origem para o destino
            i++; // Incrementa 'i'
        }
        dst[i] = '\0'; // Adiciona o caractere nulo no final da string de destino
    }

    return (src_len); // Retorna o comprimento da string de origem
}

/*
int main()
{
    char src[] = "Exemplo de teste"; // String de origem
    char dest[20]; // Array de destino com espaço suficiente

    // Chama ft_strlcpy para copiar a string de origem para o destino
    size_t len = ft_strlcpy(dest, src, sizeof(dest));

    // Imprime a string copiada e o comprimento da string de origem
    printf("String copiada: %s\n", dest);
    printf("Comprimento da string de origem: %zu\n", len);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/