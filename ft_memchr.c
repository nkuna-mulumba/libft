/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:58:57 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/17 21:01:58 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** A função ft_memchr procura o byte 'c' nos primeiros 'n' bytes da área de memória apontada por 's'.
** Retorna um ponteiro para o byte correspondente ou NULL se o byte não for encontrado.
*/
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i; // Declaração da variável 'i' para usar como índice
    const unsigned char *str; // Declaração do ponteiro para a área de memória

    str = (const unsigned char *)s; // Converte 's' para 'const unsigned char *'
    i = 0; // Inicializa o índice 'i' com 0

    // Loop para percorrer os primeiros 'n' bytes da área de memória
    while (i < n)
    {
        // Verifica se o byte atual é igual a 'c'
        if (str[i] == (unsigned char)c)
        {
            return ((void *)&str[i]); // Retorna um ponteiro para o byte correspondente
        }
        i++; // Incrementa o índice 'i'
    }

    return (NULL); // Retorna NULL se o byte não for encontrado
}
/*
int main()
{
    char str[] = "Exemplo de teste"; // String de exemplo
    char c = 'd'; // Caractere a ser procurado
    size_t n = 15; // Número de bytes a serem pesquisados

    // Chama ft_memchr para procurar o caractere 'c' nos primeiros 'n' bytes de 'str'
    char *resultado = ft_memchr(str, c, n);

    // Verifica o resultado da busca
    if (resultado != NULL)
    {
        printf("Caractere '%c' encontrado na posição: %ld\n", c, resultado - str);
    }
    else
    {
        printf("Caractere '%c' não encontrado nos primeiros %zu bytes de '%s'.\n", c, n, str);
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/