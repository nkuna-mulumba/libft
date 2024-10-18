/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_dois.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:17:14 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/04 14:17:23 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca personalizada "libft"
#include <stdlib.h> // Inclui a biblioteca padrão para alocação de memória
#include <stdio.h> // Inclui a biblioteca padrão para entrada e saída

// Função que junta duas strings
char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len_s1; // Declaração da variável para armazenar o comprimento da string s1
    size_t len_s2; // Declaração da variável para armazenar o comprimento da string s2
    char *str; // Declaração do ponteiro para a nova string concatenada

    if (!s1 || !s2) // Verifica se s1 ou s2 são nulos
        return (NULL); // Retorna NULL se qualquer uma das strings for nula

    len_s1 = ft_strlen(s1); // Calcula o comprimento de s1
    len_s2 = ft_strlen(s2); // Calcula o comprimento de s2

    str = (char *)malloc(len_s1 + len_s2 + 1); // Aloca memória para a nova string concatenada

    if (!str) // Verifica se a alocação de memória falhou
        return (NULL); // Retorna NULL se a alocação de memória falhar

    str[0] = '\0'; // Inicializa a string com o terminador nulo
    ft_strlcat(str, s1, len_s1 + len_s2 + 1); // Concatena s1 em str
    ft_strlcat(str, s2, len_s1 + len_s2 + 1); // Concatena s2 em str

    return (str); // Retorna a nova string concatenada
}

int main()
{
    char const um[] = "Nkuna"; // Declara e inicializa a string um
    char const dois[] = " Mulumba"; // Declara e inicializa a string dois
    char *tres = ft_strjoin(um, dois); // Chama a função ft_strjoin para juntar as strings um e dois

    if (!tres) // Verifica se a função ft_strjoin retornou NULL
    {
        return (1); // Retorna 1 se a alocação de memória falhou
    }
    else
    {
        printf("Adicionar %s em %s resulta em: %s\n", dois, um, tres); // Imprime a nova string concatenada
    }
    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}

