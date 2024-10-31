/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:03:49 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/18 17:04:19 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** A função ft_isdigit verifica se um caractere é um dígito decimal.
** Retorna 1 se o caractere for um dígito decimal (entre '0' e '9'), caso contrário retorna 0.
*/
int ft_isdigit(int c)
{
    // Verifica se o caractere está entre '0' e '9'
    if (c >= '0' && c <= '9')
    {
        return 1; // Retorna 1 se for um dígito decimal
    }
    else
    {
        return 0; // Retorna 0 se não for um dígito decimal
    }
}
/*
int main()
{
    char ch1 = '3'; // Caractere de exemplo dígito
    char ch2 = 'a'; // Caractere de exemplo não dígito
    char ch3 = '7'; // Outro caractere de exemplo dígito

    // Chama ft_isdigit para verificar se os caracteres são dígitos decimais
    int resultado1 = ft_isdigit(ch1);
    int resultado2 = ft_isdigit(ch2);
    int resultado3 = ft_isdigit(ch3);

    // Imprime os resultados
    printf("Caractere '%c': %d\n", ch1, resultado1);
    printf("Caractere '%c': %d\n", ch2, resultado2);
    printf("Caractere '%c': %d\n", ch3, resultado3);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/