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

#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int ft_isascii(int c)  // Declaração da função ft_isascii que verifica se um caractere está na tabela ASCII
{
    if (c >= 0 && c <= 127)  // Verifica se o valor de c está entre 0 e 127
    {
        return (1);  // Retorna 1 se c estiver dentro do intervalo ASCII
    }
    else
    {
        return (0);  // Retorna 0 se c não estiver dentro do intervalo ASCII
    }
}

int main()  // Função principal do programa
{
    char caractAscii;  // Declaração da variável caractAscii do tipo char

    printf("Digite qualquer caracter que esteja dentro da tabela ASCII: ");  // Solicita ao usuário que digite um caractere
    scanf("%c", &caractAscii);  // Lê o caractere digitado pelo usuário e armazena em caractAscii

    if (ft_isascii(caractAscii))  // Chama a função ft_isascii para verificar se o caractere está na tabela ASCII
    {
        printf("O valor ASCII de %c é %d esta dentro da tabela ASCII. \n", caractAscii, caractAscii);  // Imprime que o caractere está na tabela ASCII
    }
    else
    {
        printf("O valor ASCII de %c é %d nao se contra dentro da tabela ASCII. \n", caractAscii, caractAscii);  // Imprime que o caractere não está na tabela ASCII
    }
    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}

