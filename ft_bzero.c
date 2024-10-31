/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:22:17 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/21 21:23:13 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** A função ft_bzero zera os primeiros 'n' bytes da área de memória apontada por 's'.
** Útil para inicializar blocos de memória com zero.
*/
void ft_bzero(void *s, size_t n)
{
    unsigned char *str; // Declaração do ponteiro para a área de memória
    size_t i; // Declaração da variável 'i' para uso como índice

    // Converte o ponteiro 's' para um ponteiro de unsigned char
    str = (unsigned char *)s;
    i = 0; // Inicializa o índice 'i' com 0

    // Itera sobre os primeiros 'n' bytes e os zera
    while (i < n)
    {
        str[i] = 0; // Zera o byte atual
        i++; // Incrementa o índice 'i'
    }
}
/*
int main()
{
    char str[20] = "Exemplo de teste"; // String de exemplo

    // Chama ft_bzero para zerar os primeiros 5 bytes da string
    ft_bzero(str, 5);

    // Imprime a string resultante
    printf("String após ft_bzero: %s\n", str);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/