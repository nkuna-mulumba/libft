/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:32:40 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/19 14:33:13 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** A função ft_isascii verifica se um caractere está na tabela ASCII.
** Retorna 1 se o caractere estiver no intervalo ASCII (0 a 127), caso contrário retorna 0.
*/
int ft_isascii(int c)
{
    // Verifica se o valor de c está entre 0 e 127
    if (c >= 0 && c <= 127)
    {
        return (1); // Retorna 1 se c estiver dentro do intervalo ASCII
    }
    else
    {
        return (0); // Retorna 0 se c não estiver dentro do intervalo ASCII
    }
}

int main()
{
    char ch1 = 'A'; // Caractere de exemplo ASCII
    char ch2 = 128; // Caractere fora do intervalo ASCII

    // Chama ft_isascii para verificar se os caracteres estão na tabela ASCII
    int resultado1 = ft_isascii(ch1);
    int resultado2 = ft_isascii(ch2);

    // Imprime os resultados
    printf("Caractere '%c' (%d): %d\n", ch1, ch1, resultado1);
    printf("Caractere '%c' (%d): %d\n", ch2, ch2, resultado2);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
