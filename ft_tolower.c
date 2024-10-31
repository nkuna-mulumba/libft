/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:26:19 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/25 18:27:01 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca personalizada "libft.h"

/*
** A função ft_tolower converte um caractere maiúsculo para minúsculo.
** Se o caractere estiver entre 'A' e 'Z', a função retorna o caractere convertido para minúsculo.
** Caso contrário, a função retorna o caractere original.
*/
int ft_tolower(int c)
{
    // Verifica se o caractere está entre 'A' e 'Z'
    if ((c >= 'A') && (c <= 'Z'))
    {
        return (c + 32); // Converte o caractere para minúsculo somando 32 ao valor ASCII
    }
    else
    {
        return (c); // Retorna o caractere original se não for maiúsculo
    }
}
/*
int main()
{
    char maiusculo = 'A'; // Caractere maiúsculo de exemplo
    char minusculo = ft_tolower(maiusculo); // Chama ft_tolower para converter o caractere para minúsculo

    // Imprime o resultado da conversão
    printf("Caractere maiúsculo: %c\n", maiusculo);
    printf("Caractere minúsculo: %c\n", minusculo);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/