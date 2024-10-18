/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 20:10:58 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/18 20:31:03 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*Passo a Passo para Criar a Função ft_itoa
Contar Dígitos: Crie uma função auxiliar digit_counter para contar o número de dígitos no número inteiro. Esta função também trata casos especiais como 0 e -2147483648.
Calcular Potência de 10: Crie uma função auxiliar exp_counter para calcular a potência de 10 correspondente ao número de dígitos. Esta função ajuda a extrair cada dígito do número.
Converter Inteiro para String: Crie a função principal ft_itoa que:
Converte o número para long int para lidar com o valor absoluto.
Usa exp_counter para calcular a potência de 10.
Aloca memória suficiente para a string resultante usando malloc.
Trata números negativos adicionando o sinal - à string.
Extrai cada dígito do número e o adiciona à string.
Adiciona o terminador nulo \0 ao final da string.*/

// Função auxiliar para contar os dígitos de um número
static int ft_count_nbr(int n) {
    int length_nbr;

    length_nbr = 0; // Inicializa o comprimento em 0
    if (n <= 0) {
        length_nbr = 1; // Conta o sinal '-' ou o número '0'
    } else {
        length_nbr = 0; // Para números positivos, inicia com 0
    }
    while (n != 0) {
        n = n / 10; // Divide o número por 10 para remover o último dígito
        length_nbr++; // Incrementa o comprimento
    }
    return length_nbr; // Retorna o comprimento do número
}

// Função principal para converter um número inteiro em uma string
char *ft_itoa(int n) {
    int length;
    char *int_to_str;
    long num;

    length = ft_count_nbr(n); // Obtém o comprimento de 'n' usando a função auxiliar
    int_to_str = malloc((length + 1) * sizeof(char)); // Aloca memória para a string, incluindo o caractere nulo
    if (!int_to_str)
        return (NULL); // Retorna NULL se a alocação falhar
    int_to_str[length] = '\0'; // Define o caractere nulo no final da string
    num = n;
    if (num == 0)
        int_to_str = '0'; // retorna "0" se 'num' for 0
    if (num < 0) {
        int_to_str[0] = '-'; // Adiciona o sinal negativo no início da string
        num = -num; // Converte o número para positivo
    }
    while (num != 0) {
        int_to_str[--length] = (num % 10) + '0'; // Converte o último dígito de 'num' para char e armazena na string
        num = num / 10; // Remove o último dígito de 'num'
    }
    return (int_to_str); // Retorna a string resultante
}

/*
int main() {
    int number = -2147483648;
    char *int_to_str = ft_itoa(number);

    if (!int_to_str) {
        return (1); // Retorna 1 em caso de falha na alocação de memória
    } else {
        printf("%s\n", int_to_str); // Imprime o resultado
        free(int_to_str); // Libera a memória alocada
    }
    return 0; // Retorna 0 em caso de sucesso
}
*/

