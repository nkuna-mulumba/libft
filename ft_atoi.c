/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:41:59 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/30 19:43:03 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

// Função para converter uma string de caracteres numéricos em um inteiro
int ft_atoi(const char *str)
{
        size_t i = 0;

        // Ignorar espaços em branco iniciais (tabulação, nova linha, espaço, etc.)
        while (((unsigned char)str[i] >= 9 && (unsigned char)str[i] <= 13) || ((unsigned char)str[i] == 32))
        {
                i++;
        }

        int sign = 1;

        // Verificar se há um sinal '+' ou '-'
        if (((unsigned char)str[i] == 43) || ((unsigned char)str[i] == 45))
        {
                // Se o sinal for '-', ajustar a variável sign para -1
                if ((unsigned char)str[i] == 45)
                {
                        sign = -1;
                }
                i++;
        }

        int converte = 0;

        // Converter os caracteres numéricos em um valor inteiro
        while (((unsigned char)str[i] >= 48) && ((unsigned char)str[i] <= 57))
        {
                // Acumular o valor numérico na variável converte
                converte = (converte * 10) + ((unsigned char)str[i] - 48);
                i++;
        }

        // Retornar o valor convertido, aplicando o sinal
        return (sign * converte);
}

int main()
{
        const char string[] = " -123";

        // Chamar a função atoi para converter a string em um inteiro
        int resultado = ft_atoi(string);

        // Imprimir o resultado da conversão
        printf("String de caracteres numericas %s, foi convertido em: %d inteiro\n", string, resultado);

        return 0;
}

