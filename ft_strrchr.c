/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:36:37 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/26 19:37:46 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

// Declara a função strrchr que encontra a última ocorrência de um caractere em uma string
char *strrchr(const char *s, int c) {
    char *ultimo; // Ponteiro para armazenar a última ocorrência do caractere
    int i; // Índice para percorrer a string
    size_t s_len; // Variável para armazenar o comprimento da string

    s_len = 0; // Inicializa o comprimento da string com 0
    // Loop para calcular o comprimento da string
    while (s[s_len] != '\0') {
        s_len++; // Incrementa o comprimento da string
    }

    i = s_len; // Inicializa o índice com o comprimento da string
    ultimo = NULL; // Inicializa o ponteiro ultimo com NULL
    // Loop para percorrer a string de trás para frente
    while (i >= 0) {
        // Se o caractere atual for igual ao caractere procurado
        if (s[i] == (unsigned char)c) {
            ultimo = (char *)&s[i]; // Atualiza o ponteiro ultimo com o endereço do caractere encontrado
            break; // Sai do loop
        }
        i--; // Decrementa o índice
    }
    return (ultimo); // Retorna o ponteiro para a última ocorrência do caractere ou NULL se não encontrado
}

int main() {
    char nome[] = "Nkuna"; // Declara uma string chamada nome
    char caractere = 'u'; // Declara o caractere a ser procurado
    char *ocorrencia = strrchr(nome, caractere); // Chama a função strrchr para encontrar a última ocorrência do caractere na string

    // Se a ocorrência não for NULL, significa que o caractere foi encontrado
    if (ocorrencia != NULL) {
        printf("O %c é encontrado na %s\n", caractere, nome); // Imprime a mensagem indicando que o caractere foi encontrado
    } else {
        printf("O %c nao é encontrado em %s\n", caractere, nome); // Imprime a mensagem indicando que o caractere não foi encontrado
    }
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

