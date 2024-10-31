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

#include "libft.h" // Inclui o cabeçalho da biblioteca personalizada "libft.h"

/*
** A função ft_strjoin junta duas strings 's1' e 's2' em uma nova string.
** Retorna um ponteiro para a nova string concatenada ou NULL se qualquer uma das strings for nula.
*/
char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len_s1; // Declaração da variável para armazenar o comprimento da string s1
    size_t len_s2; // Declaração da variável para armazenar o comprimento da string s2
    char *str; // Declaração do ponteiro para a nova string concatenada

    // Verifica se s1 ou s2 são nulos
    if (!s1 || !s2)
        return (NULL); // Retorna NULL se qualquer uma das strings for nula

    len_s1 = ft_strlen(s1); // Calcula o comprimento de s1
    len_s2 = ft_strlen(s2); // Calcula o comprimento de s2

    // Aloca memória para a nova string concatenada
    str = (char *)malloc(len_s1 + len_s2 + 1);
    if (!str) // Verifica se a alocação de memória falhou
        return (NULL); // Retorna NULL se a alocação de memória falhar

    str[0] = '\0'; // Inicializa a string com o terminador nulo

    // Concatena s1 em str
    ft_strlcat(str, s1, len_s1 + len_s2 + 1);
    // Concatena s2 em str
    ft_strlcat(str, s2, len_s1 + len_s2 + 1);

    return (str); // Retorna a nova string concatenada
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