/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:03:49 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/18 17:04:19 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

// Função que verifica se um caractere é um dígito decimal
int	ft_isdigit(int c) {
    if (c >= '0' && c <= '9') { // Verifica se o caractere está entre '0' e '9'
        return 1; // Retorna 1 se for um dígito decimal
    } else {
        return 0; // Retorna 0 se não for um dígito decimal
    }
}

int main() {
    char digitoDecimal; // Declara uma variável para armazenar o dígito inserido pelo usuário

    printf("Digite um digito: "); // Solicita ao usuário que digite um dígito
    scanf("%c", &digitoDecimal); // Lê o dígito inserido pelo usuário

    if (ft_isdigit(digitoDecimal)) { // Verifica se o dígito inserido é um dígito decimal
        printf("%c é um digito decimal.\n", digitoDecimal); // Imprime mensagem se for um dígito decimal
    } else {
        printf("%c nao é um digito decimal.\n", digitoDecimal); // Imprime mensagem se não for um dígito decimal
    }
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
