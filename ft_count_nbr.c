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

/*
** A função ft_count_nbr conta o número de dígitos de um número inteiro.
** Inclui o sinal '-' se for negativo e '0' para zero.
*/
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
int main()
{
    int num1 = 12345; // Número de exemplo positivo
    int num2 = -6789; // Número de exemplo negativo
    int num3 = 0; // Número zero de exemplo

    // Chama ft_count_nbr para contar os dígitos dos números de exemplo
    int count1 = ft_count_nbr(num1);
    int count2 = ft_count_nbr(num2);
    int count3 = ft_count_nbr(num3);

    // Imprime o número de dígitos contados
    printf("Número de dígitos em %d: %d\n", num1, count1);
    printf("Número de dígitos em %d: %d\n", num2, count2);
    printf("Número de dígitos em %d: %d\n", num3, count3);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/