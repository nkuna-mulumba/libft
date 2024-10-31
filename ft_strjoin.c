/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:40:00 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/10 20:47:23 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca personalizada "libft"

/*
** Objetivo desta função: alocar memória para uma nova string e devolver uma nova cadeia de caracteres
** que consiste na concatenação de 's1' e 's2'.
*/
char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len_s1; // Declaração da variável para armazenar o comprimento de s1
    size_t len_s2; // Declaração da variável para armazenar o comprimento de s2
    char *s1_s2;   // Declaração do ponteiro para armazenar a nova string concatenada

    // Verifica se s1 ou s2 são NULL
    if (!s1 || !s2)
        return (NULL); // Retorna NULL se s1 ou s2 forem NULL

    len_s1 = ft_strlen(s1); // Calcula o comprimento de s1
    len_s2 = ft_strlen(s2); // Calcula o comprimento de s2

    // Aloca memória para a nova string concatenada
    s1_s2 = (char *)malloc(len_s1 + len_s2 + 1);
    if (!s1_s2) // Verifica se a alocação de memória falhou
        return (NULL); // Retorna NULL se a alocação de memória falhar

    // Copia s1 para a nova string
    ft_strlcpy(s1_s2, s1, len_s1 + 1);
    // Concatena s2 à nova string
    ft_strlcat(s1_s2, s2, len_s1 + len_s2 + 1);

    return (s1_s2); // Retorna a nova string concatenada
}
/*
int main()
{
    const char s1[] = "Olá, "; // Primeira string de exemplo
    const char s2[] = "mundo!"; // Segunda string de exemplo

    // Chama ft_strjoin para juntar as duas strings
    char *resultado = ft_strjoin(s1, s2);

    // Verifica se a concatenação foi bem-sucedida
    if (resultado != NULL)
    {
        // Imprime a string concatenada
        printf("String concatenada: %s\n", resultado);
        // Libera a memória alocada para a nova string
        free(resultado);
    }
    else
    {
        // Imprime uma mensagem de erro se a concatenação falhar
        printf("Erro: Falha ao concatenar as strings.\n");
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/