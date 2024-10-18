/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftrftr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:15:11 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/28 20:16:11 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>  // Inclui a biblioteca para manipulação de strings
#include <stdio.h>   // Inclui a biblioteca para entrada e saída padrão

// Função que procura a primeira ocorrência da substring 'needle' na string 'haystack'
char *ft_strstr(const char *haystack, const char *needle)
{
    int i = 0;  // Inicializa o índice 'i' para percorrer 'haystack'
    
    // Se 'needle' for uma string vazia, retorna 'haystack'
    if (*needle == '\0')
    {
        return (char *)haystack;
    }
    else
    {
        // Percorre cada caractere de 'haystack'
        while (haystack[i] != '\0')
        {
            const char *h = &haystack[i];  // Ponteiro para a posição atual em 'haystack'
            const char *n = needle;        // Ponteiro para o início de 'needle'
            int j = 0;  // Inicializa o índice 'j' para percorrer 'needle'
            
            // Compara os caracteres subsequentes de 'haystack' e 'needle'
            while ((h[j] != '\0') && (n[j] != '\0') && (h[j] == n[j]))
            {
                j++;  // Incrementa 'j' se os caracteres forem iguais
            }
            
            // Se 'needle' for encontrado, retorna o ponteiro para a posição inicial
            if (n[j] == '\0')
            {
                return ((char *)&haystack[i]);
            }
            i++;  // Incrementa 'i' para verificar a próxima posição em 'haystack'
        }
    }
    return NULL;  // Retorna NULL se 'needle' não for encontrado em 'haystack'
}

int main()
{
    const char um[] = "Mulumba wa Tshimpamba";  // String onde será feita a busca
    const char dois[] = "wa";  // Substring a ser procurada
    char *ocorrencia = ft_strstr(um, dois);  // Chama a função para encontrar a substring
    
    // Verifica se a substring foi encontrada e imprime o resultado
    if (ocorrencia != NULL)
    {
        printf("Primeira ocorrência de %s encontrado em %s\n", dois, um);
    }
    else
    {
        printf("Não encontrado a primeira ocorrência de %s em %s\n", dois, um);
    }
    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}

