/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:17:59 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/24 18:18:14 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** A função ft_strlcat concatena a string src ao final da string dst,
** até um total de size caracteres. Garante que a string resultante seja nula terminada.
** Retorna o comprimento total da string que tentou criar, isto é, o comprimento inicial de dst mais o comprimento de src.
*/
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i; // Declara a variável i para uso no loop
    size_t src_len; // Declara a variável src_len para armazenar o comprimento da string src
    size_t dst_len; // Declara a variável dst_len para armazenar o comprimento da string dst

    src_len = 0; // Inicializa src_len com 0
    dst_len = 0; // Inicializa dst_len com 0

    // Calcula o comprimento da string dst até encontrar o caractere nulo ou atingir o tamanho máximo
    while ((dst[dst_len] != '\0') && (dst_len < size))
    {
        dst_len++; // Incrementa dst_len
    }

    // Calcula o comprimento da string src até encontrar o caractere nulo
    while (src[src_len] != '\0')
    {
        src_len++; // Incrementa src_len
    }

    // Se dst_len for igual ao tamanho máximo, retorna o tamanho máximo mais o comprimento de src
    if (dst_len == size)
    {
        return (size + src_len); // Retorna o tamanho máximo mais o comprimento de src
    }

    i = 0; // Inicializa i com 0

    // Concatena src em dst até encontrar o caractere nulo ou atingir o tamanho máximo menos 1
    while ((src[i] != '\0') && ((dst_len + i) < (size - 1)))
    {
        dst[dst_len + i] = src[i]; // Copia o caractere de src para dst
        i++; // Incrementa i
    }

    // Se ainda houver espaço em dst, adiciona o caractere nulo no final
    if ((dst_len + i) < size)
    {
        dst[dst_len + i] = '\0'; // Adiciona o caractere nulo no final de dst
    }

    return (dst_len + src_len); // Retorna o comprimento total das strings concatenadas
}
/*
int main()
{
    char dest[30] = "Olá, "; // String de destino com espaço suficiente
    char src[] = "mundo!"; // String de origem a ser concatenada

    // Chama ft_strlcat para concatenar a string de origem ao final da string de destino
    size_t len = ft_strlcat(dest, src, sizeof(dest));

    // Imprime a string concatenada e o comprimento total das strings concatenadas
    printf("String concatenada: %s\n", dest);
    printf("Comprimento total das strings concatenadas: %zu\n", len);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/