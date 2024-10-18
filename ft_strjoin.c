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

#include "libft.h"

/*
 Objetivo desta função aloca a memoria em nova STRING, e devolve uma nova cadeia de caracteres,
 que consiste na concatenação de 's1' e 's2'. 
*/

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len_s1;  // Declaração da variável para armazenar o comprimento de s1
    size_t len_s2;  // Declaração da variável para armazenar o comprimento de s2
    char *s1_s2;    // Declaração do ponteiro para armazenar a nova string concatenada

    if (!s1 || !s2) // Verifica se s1 ou s2 são NULL
        return (NULL); // Retorna NULL se s1 ou s2 forem NULL

    len_s1 = ft_strlen(s1); // Calcula o comprimento de s1
    len_s2 = ft_strlen(s2); // Calcula o comprimento de s2

    s1_s2 = (char *)malloc(len_s1 + len_s2 + 1); // Aloca memória para a nova string concatenada
    if (!s1_s2) // Verifica se a alocação de memória falhou
        return (NULL); // Retorna NULL se a alocação de memória falhar

    ft_strlcpy(s1_s2, s1, len_s1 + 1); // Copia s1 para a nova string
    ft_strlcat(s1_s2, s2, len_s1 + len_s2 + 1); // Concatena s2 à nova string
    return (s1_s2); // Retorna a nova string concatenada
}

int main()
{
    char const *um = "Nkuna"; // Declaração e inicialização da string um
    char const *dois = "Mulumba"; // Declaração e inicialização da string dois
    char *um_dois = ft_strjoin(um, dois); // Chama a função ft_strjoin para concatenar as strings um e dois
    if (um_dois) // Verifica se a função ft_strjoin retornou uma string válida
    {
        printf("%s\n", um_dois); // Imprime a string concatenada
        free(um_dois); // Libera a memória alocada para a string concatenada
    }
    else
    {
        return (0); // Retorna 0 se a função ft_strjoin retornar NULL
    }
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
/*
OBS: Alocação de memória e uso de strlcpy e strlcat:
* Alocação de memória: A memória é alocada para garantir que haja espaço suficiente para armazenar a nova string concatenada. A soma dos comprimentos de s1 e s2, mais um byte adicional para o caractere nulo (\0), é necessária para garantir que a nova string seja armazenada corretamente.

*Uso de strlcpy e strlcat:
 - STRLCPY é usado para copiar s1 para a nova string, garantindo que a string resultante seja terminada em nulo.
 - STRLCAT é usado para concatenar s2 à nova string, garantindo que a string resultante seja terminada em nulo e que não haja estouro de buffer.
*/
