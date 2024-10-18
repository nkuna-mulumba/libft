/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:16:13 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/21 19:16:27 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

void *ft_memset(void *s, int c, size_t n) // Declara a função ft_memset que recebe um ponteiro, um inteiro e um tamanho
{
    unsigned char *str; // Declara um ponteiro para unsigned char
    size_t i; // Declara uma variável do tipo size_t para iteração

    i = 0; // Inicializa a variável i com 0
    str = (unsigned char *)s; // Converte o ponteiro s para um ponteiro de unsigned char e atribui a str
    while (i < n) // Loop enquanto i for menor que n
    {
        str[i] = (unsigned char) c; // Atribui o valor de c convertido para unsigned char à posição i de str
        i++; // Incrementa i
    }
    return (s); // Retorna o ponteiro original s
}

int main() // Função principal
{
    char org[50]; // Declara um array de char com 50 posições
    char caract; // Declara uma variável char para armazenar o caractere de entrada
    size_t bytes; // Declara uma variável size_t para armazenar o número de bytes

    printf("Digite valor ou caracter a ser inicializada a variavel ORG: \n"); // Pede ao usuário para digitar um caractere
    scanf("%c", &caract); // Lê o caractere digitado pelo usuário
    printf("Digite tamanho a ser alogado na variavel ORG: \n"); // Pede ao usuário para digitar o tamanho
    scanf("%zu", &bytes); // Lê o tamanho digitado pelo usuário
    ft_memset(org, caract, bytes); // Chama a função ft_memset para preencher org com o caractere digitado
    org[bytes] = '\0'; // Adiciona o caractere nulo na posição bytes para terminar a string
    printf("A sua variavel foi reniciada com: %s como valor ou caractere.\n", org); // Imprime o valor inicializado de org
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

