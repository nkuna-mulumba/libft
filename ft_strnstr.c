/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:40:50 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/28 22:13:04 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>  // Inclui a biblioteca para manipulação de strings
#include <stdio.h>   // Inclui a biblioteca para entrada e saída padrão

// Função que procura a substring 'little' dentro da string 'big' até o comprimento 'len'
char *ft_strnstr(const char *big, const char *little, size_t len)
{
    if (*little == '\0')  // Se 'little' for uma string vazia
    {
        return (char *)big;  // Retorna 'big'
    }
    else
    {   
        size_t i = 0;  // Inicializa o índice 'i'
        while (i < len && big[i] != '\0')  // Loop principal até 'len' ou fim de 'big'
        {   
            const char *b = (char *)&big[i];  // Ponteiro para a posição atual em 'big'
            const char *l = little;  // Ponteiro para 'little'
            size_t j = 0;  // Inicializa o índice 'j'
            while ((i + j < len) && (b[j] != '\0') && (l[j] != '\0') && (b[j] == l[j]))  // Loop interno para comparar substrings
            {
                j++;  // Incrementa 'j' se os caracteres forem iguais
            }
            if (l[j] == '\0')  // Se 'little' foi encontrado em 'big'
            {
                return (char *)&big[i];  // Retorna o ponteiro para a posição inicial da substring em 'big'
            }
            i++;  // Incrementa 'i' para a próxima posição em 'big'
        }
    }
    return (NULL);  // Retorna NULL se 'little' não for encontrado em 'big'
}

int main()
{
    const char um[] = "Mulumba wa Tshipamba";  // String 'big'
    const char dois[] = "mba";  // String 'little'
    char *ocorrencia = ft_strnstr(um, dois, 5);  // Chama a função com 'len' = 5
    if (ocorrencia != NULL)  // Se a ocorrência foi encontrada
    {   
        printf("Foi encontrada ocorrencia de %s em %s segundo tamanho especificado", dois, um);  // Imprime mensagem de sucesso
    }
    else  // Se a ocorrência não foi encontrada
    {
        printf("Ocorrencia de %s, nao encontrado em %s, segundo o tamanho especificado", dois, um);  // Imprime mensagem de falha
    }
    return (0);  // Retorna 0 para indicar que o programa terminou com sucesso
}

