/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:41:01 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/17 20:42:13 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** A função ft_memcmp compara os primeiros 'n' bytes das áreas de memória 's1' e 's2'.
** Retorna um valor menor que, igual a, ou maior que zero dependendo se a área de memória 's1'
** é menor que, igual a, ou maior que a área de memória 's2'.
*/
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i; // Declaração da variável 'i' para uso como índice
    const unsigned char *str1; // Declaração do ponteiro para a área de memória 's1'
    const unsigned char *str2; // Declaração do ponteiro para a área de memória 's2'

    str1 = (const unsigned char *)s1; // Converte 's1' para 'const unsigned char *'
    str2 = (const unsigned char *)s2; // Converte 's2' para 'const unsigned char *'

    i = 0; // Inicializa o índice 'i' com 0

    // Loop para comparar os primeiros 'n' bytes das áreas de memória
    while (i < n)
    {
        // Verifica se os bytes atuais são diferentes
        if (str1[i] != str2[i])
        {
            return (str1[i] - str2[i]); // Retorna a diferença entre os bytes se forem diferentes
        }
        i++; // Incrementa o índice 'i'
    }

    return (0); // Retorna 0 se as áreas de memória forem iguais nos primeiros 'n' bytes
}
/*
int main()
{
    char str1[] = "Exemplo de teste"; // Primeira área de memória de exemplo
    char str2[] = "Exemplo de tasta"; // Segunda área de memória de exemplo
    size_t n = 15; // Número de bytes a serem comparados

    // Chama ft_memcmp para comparar as áreas de memória
    int resultado = ft_memcmp(str1, str2, n);

    // Verifica o resultado da comparação
    if (resultado < 0)
    {
        printf("A área de memória 'str1' é menor que 'str2' nos primeiros %zu bytes.\n", n);
    }
    else if (resultado > 0)
    {
        printf("A área de memória 'str1' é maior que 'str2' nos primeiros %zu bytes.\n", n);
    }
    else
    {
        printf("As áreas de memória 'str1' e 'str2' são iguais nos primeiros %zu bytes.\n", n);
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/