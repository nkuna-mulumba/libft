/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:55:31 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/13 20:56:06 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

// A função ft_count_nbr conta o número de dígitos de um número inteiro
// Inclui o sinal '-' se for negativo e '0' para zero.
int ft_count_nbr(int n)
{
    int length_nbr; // Declara uma variável para armazenar o comprimento do número

    if (n <= 0) // Verifica se n é menor ou igual a 0
    {
        length_nbr = 1; // Se for, inicializa length_nbr como 1 para contar o sinal '-' ou o '0'
    }
    else // Caso contrário (n é positivo)
    {
        length_nbr = 0; // Inicializa length_nbr como 0
    }

    while (n != 0) // Continua o loop enquanto n não for zero
    {
        n = n / 10; // Divide n por 10 para remover o último dígito
        length_nbr++; // Incrementa length_nbr para contar o dígito removido
    }
    return (length_nbr); // Retorna o comprimento total do número
}
/*
int main() // Função principal do programa
{
    int number = -0; // Declara a variável number e a inicializa com -0
    int length_number = ft_count_nbr(number); // Chama a função ft_count_nbr e armazena o resultado em length_number
    printf("%d\n", length_number); // Imprime o comprimento do número
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/
