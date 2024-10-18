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

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

// Função que verifica se um caractere é imprimível
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

int main()
{
    char caract_imp; // Declara uma variável para armazenar o caractere de entrada

    // Solicita ao usuário que introduza um caractere imprimível
    printf("Introduza qualquer tipo de caractere que seja imprimível: ");
    // Lê o caractere introduzido pelo usuário
    scanf("%c", &caract_imp);

    // Verifica se o caractere introduzido é imprimível usando a função ft_isprint
    if (ft_isprint(caract_imp))
    {
        // Imprime uma mensagem indicando que o caractere é imprimível
        printf("O caractere (dígito) %c é imprimível.\n", caract_imp);
    }
    else
    {
        // Imprime uma mensagem indicando que o caractere não é imprimível
        printf("O caractere (dígito) %c não é imprimível.\n", caract_imp);
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

