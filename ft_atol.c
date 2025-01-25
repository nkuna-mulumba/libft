/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:33:49 by jcongolo          #+#    #+#             */
/*   Updated: 2025/01/16 15:33:56 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Função para converter uma string de caracteres (representando um número inteiro) em um valor long
long    ft_atol(const char *nptr)
{
    size_t i;           // Variável para iterar sobre a string
    int sign;           // Variável para armazenar o sinal do número
    long convert;       // Variável para armazenar o número convertido

    i = 0;  // Inicializa o índice 'i' com 0

    // Ignora espaços em branco (caracteres de controle e espaço)
    while (((unsigned char)nptr[i] >= 9 && (unsigned char)nptr[i] <= 13)
           || ((unsigned char)nptr[i] == 32))
    {
        i++;    // Incrementa o índice 'i' para avançar na string
    }

    sign = 1;  // Inicializa o sinal como positivo

    // Verifica se há um sinal de mais (+) ou menos (-) e define o sinal
    if (((unsigned char)nptr[i] == 43) || ((unsigned char)nptr[i] == 45))
    {
        if ((unsigned char)nptr[i] == 45)
        {
            sign = -1; // Define o sinal como negativo se o caractere for '-'
        }
        i++;    // Incrementa o índice 'i' para avançar na string
    }

    convert = 0;    // Inicializa a variável 'convert' com 0

    // Converte cada caractere numérico na string para um valor inteiro
    while (ft_isdigit((unsigned char)nptr[i]))
    {
        convert = (convert * 10) + ((unsigned char)nptr[i] - 48);
        i++;    // Incrementa o índice 'i' para avançar na string
    }

    return (sign * convert);    // Aplica o sinal ao valor convertido e retorna
}
