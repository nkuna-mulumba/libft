/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:24:00 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/25 18:29:18 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca personalizada "libft.h"

/*
** A função ft_toupper converte um caractere minúsculo para maiúsculo.
** Retorna o caractere convertido se for minúsculo, caso contrário retorna o caractere original.
*/
int ft_toupper(int c)
{
    // Verifica se o caractere está entre 'a' e 'z'
    if ((c >= 'a') && (c <= 'z'))
    {
        return (c - 32); // Converte o caractere para maiúsculo subtraindo 32 do valor ASCII
    }
    else
    {
        return (c); // Retorna o caractere original se não for minúsculo
    }
}
/*
int main()
{
    char letra_minuscula = 'b'; // Caractere de exemplo minúsculo
    char letra_maiuscula = ft_toupper(letra_minuscula); // Converte o caractere para maiúsculo

    // Imprime o resultado
    printf("Caractere original: %c\n", letra_minuscula);
    printf("Caractere convertido: %c\n", letra_maiuscula);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/