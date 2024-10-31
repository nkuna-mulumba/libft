/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:16:13 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/21 19:16:27 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca personalizada libft

/*
** A função ft_memset preenche os primeiros n bytes da área de memória apontada por s com o byte c.
** Retorna um ponteiro para a área de memória s.
*/
void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *str; // Declara um ponteiro para unsigned char
    size_t i; // Declara uma variável do tipo size_t para iteração

    i = 0; // Inicializa a variável i com 0
    str = (unsigned char *)s; // Converte o ponteiro s para um ponteiro de unsigned char e atribui a str

    // Loop enquanto i for menor que n
    while (i < n)
    {
        str[i] = (unsigned char)c; // Atribui o valor de c convertido para unsigned char à posição i de str
        i++; // Incrementa i
    }
    
    return (s); // Retorna o ponteiro original s
}
/*
int main()
{
    char str[50] = "Esta é uma string de exemplo."; // Declara uma string de exemplo

    // Chama ft_memset para preencher os primeiros 10 bytes de str com '*'
    ft_memset(str, '*', 10);

    // Imprime a string resultante
    printf("String após ft_memset: %s\n", str);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/