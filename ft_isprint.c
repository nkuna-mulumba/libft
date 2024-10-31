/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:41:54 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/19 17:42:11 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** A função ft_isprint verifica se um caractere é imprimível.
** Retorna 1 se o caractere estiver no intervalo imprimível da tabela ASCII (32 a 126), caso contrário retorna 0.
*/
int ft_isprint(int c)
{
    // Verifica se o caractere está no intervalo imprimível da tabela ASCII
    if (c >= 32 && c <= 126)
    {
        return 1; // Retorna 1 se o caractere for imprimível
    }
    else
    {
        return 0; // Retorna 0 se o caractere não for imprimível
    }
}
/*
int main()
{
    char ch1 = ' '; // Caractere de exemplo imprimível (espaço)
    char ch2 = 'A'; // Caractere de exemplo imprimível
    char ch3 = 127; // Caractere de exemplo não imprimível

    // Chama ft_isprint para verificar se os caracteres são imprimíveis
    int resultado1 = ft_isprint(ch1);
    int resultado2 = ft_isprint(ch2);
    int resultado3 = ft_isprint(ch3);

    // Imprime os resultados
    printf("Caractere '%c': %d\n", ch1, resultado1);
    printf("Caractere '%c': %d\n", ch2, resultado2);
    printf("Caractere '%c': %d\n", ch3, resultado3);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/