/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 21:06:02 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/06 21:16:10 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Função que aplica uma função a cada carácter de uma string, passando o índice e o endereço do carácter
void ft_striteri(char *s, void (*f)(unsigned int, char *)) {
    unsigned int i = 0; // Inicializa o índice

    // Percorre a string até encontrar o caractere nulo '\0'
    while (s[i] != '\0') {
        f(i, &s[i]); // Aplica a função f ao carácter atual, passando o índice e o endereço do carácter
        i++; // Incrementa o índice
    }
}

// Função de exemplo que modifica cada carácter adicionando o índice ao valor ASCII do carácter
void apl_func(unsigned int i, char *c) {
    *c = *c + i; // Modifica o carácter
}

int main() {
    char str[] = "Hello, World!"; // String a ser modificada

    printf("String original: %s\n", str); // Imprime a string original

    ft_striteri(str, apl_func); // Aplica a função ft_striteri à string, usando apl_func

    printf("String modificada: %s\n", str); // Imprime a string modificada

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

