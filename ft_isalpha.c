/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:24:46 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/18 14:25:17 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Função para verificar se um caractere é uma letra do alfabeto
int ft_isalpha(char *c) {
    // Verifica se o caractere é uma letra maiúscula ou minúscula
    if ((*c >= 'A' && *c <= 'Z') || (*c >= 'a' && *c <= 'z')) {
        return 1; // Retorna 1 se for uma letra
    } else {
        return 0; // Retorna 0 se não for uma letra
    }
}

int main() {
    char caract; // Declaração da variável para armazenar o caractere
    
    // Solicita ao usuário que digite um caractere
    printf("Digite um caractere: ");
    // Lê o caractere digitado pelo usuário
    scanf("%c", &caract);
    
    // Chama a função ft_isalpha passando o endereço de caract
    if (ft_isalpha(&caract)) {
        // Se for uma letra, imprime que é uma letra do alfabeto
        printf("%c é uma letra do alfabeto.\n", caract);
    } else {
        // Se não for uma letra, imprime que não é uma letra do alfabeto
        printf("%c não é uma letra do alfabeto.\n", caract);
    }
    
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

