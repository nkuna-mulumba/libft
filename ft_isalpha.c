/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:24:46 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/18 14:25:17 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** A função ft_isalpha verifica se um caractere é uma letra do alfabeto.
** Retorna 1 se for uma letra maiúscula ou minúscula, caso contrário retorna 0.
*/
int ft_isalpha(int c)
{
    // Verifica se o caractere é uma letra maiúscula ou minúscula
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        return 1; // Retorna 1 se for uma letra
    }
    else
    {
        return 0; // Retorna 0 se não for uma letra
    }
}
/*
int main()
{
    char ch1 = 'a'; // Caractere de exemplo alfabético
    char ch2 = 'Z'; // Caractere de exemplo alfabético
    char ch3 = '1'; // Caractere de exemplo não alfabético

    // Chama ft_isalpha para verificar se os caracteres são letras
    int resultado1 = ft_isalpha(ch1);
    int resultado2 = ft_isalpha(ch2);
    int resultado3 = ft_isalpha(ch3);

    // Imprime os resultados
    printf("Caractere '%c': %d\n", ch1, resultado1);
    printf("Caractere '%c': %d\n", ch2, resultado2);
    printf("Caractere '%c': %d\n", ch3, resultado3);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/