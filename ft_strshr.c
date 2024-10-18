/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strshr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:48:01 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/26 17:49:50 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída
#include <string.h> // Inclui a biblioteca para manipulação de strings

// Declaração da função strchr que procura a primeira ocorrência de um caractere em uma string
char *strchr(const char *s, int c)
{
    char *inicio = NULL; // Inicializa o ponteiro 'inicio' com NULL
    int i; // Declaração da variável 'i' para usar como índice

    i = 0; // Inicializa o índice 'i' com 0
    while (s[i] != '\0') // Loop para percorrer a string até encontrar o caractere nulo
    {
        if (s[i] == (unsigned char)c) // Verifica se o caractere atual é igual ao caractere 'c'
        {
            inicio = (char *)&s[i]; // Se for igual, armazena o endereço do caractere em 'inicio'
            break; // Para o loop após encontrar a primeira ocorrência
        }
        i++; // Incrementa o índice 'i' para verificar o próximo caractere
    }
    return (inicio); // Retorna o ponteiro 'inicio' (NULL se o caractere não for encontrado)
}

int main()
{
    const char nome[] = "Nkuna"; // Declara e inicializa a string 'nome'
    char caract = 'c'; // Declara e inicializa o caractere 'caract'
    char *ocorrencia = strchr(nome, caract); // Chama a função 'strchr' e armazena o resultado em 'ocorrencia'
  
    if (ocorrencia != NULL) // Verifica se o caractere foi encontrado
    {
        // Se encontrado, imprime a mensagem com o caractere e a string
        printf("O caractere de ocorrência %c é encontrado em %s\n", caract, nome);
    }
    else
    {
        // Se não encontrado, imprime a mensagem indicando que o caractere não foi encontrado
        printf("O caractere de ocorrência %c não é encontrado em %s\n", caract, nome);
    }

    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}


