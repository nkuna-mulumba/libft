/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:48:08 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/18 17:48:32 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** A função ft_isalnum verifica se um caractere é alfanumérico.
** Retorna 1 se for uma letra, 2 se for um dígito, e 0 se não for alfanumérico.
*/
int ft_isalnum(int c)
{
    // Verifica se o caractere é uma letra minúscula ou maiúscula
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return 1; // Retorna 1 se for uma letra
    }
    // Verifica se o caractere é um dígito
    else if (c >= '0' && c <= '9')
    {
        return 2; // Retorna 2 se for um dígito
    }
    else
    {
        return 0; // Retorna 0 se não for alfanumérico
    }
}
/*
int main()
{
    char ch1 = 'a'; // Caractere de exemplo alfabético
    char ch2 = '9'; // Caractere de exemplo numérico
    char ch3 = '#'; // Caractere de exemplo não alfanumérico

    // Chama ft_isalnum para verificar se os caracteres são alfanuméricos
    int resultado1 = ft_isalnum(ch1);
    int resultado2 = ft_isalnum(ch2);
    int resultado3 = ft_isalnum(ch3);

    // Imprime os resultados
    printf("Caractere '%c': %d\n", ch1, resultado1);
    printf("Caractere '%c': %d\n", ch2, resultado2);
    printf("Caractere '%c': %d\n", ch3, resultado3);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/
