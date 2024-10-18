/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:14:22 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/10 18:15:11 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* A função ft_strmapi aplica a função 'f' a cada caractere da string 's' para criar uma nova string resultante da aplicação sucessiva de 'f'.
*/

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *s_f; // Ponteiro para a nova string
    size_t  i;    // Índice para iterar pela string
    
    if (!s || !f) // Verifica se os parâmetros são válidos
        return (NULL);
    
    s_f = malloc((ft_strlen(s) + 1) * sizeof(char)); // Aloca memória para a nova string
    if (!s_f) // Verifica se a alocação de memória foi bem-sucedida
        return (NULL);
    
    i = 0;
    while (i < ft_strlen(s)) // Itera por cada caractere da string original
    {
        s_f[i] = f(i, s[i]); // Aplica a função 'f' ao caractere atual
        i++;
    }
    s_f[i] = '\0'; // Adiciona o caractere nulo ao final da nova string
    return (s_f); // Retorna a nova string
}

// Função de exemplo que será aplicada a cada caractere
char    func_apl(unsigned int i, char c)
{
    return (c + i); // Retorna o caractere incrementado pelo índice
}

int main()
{
    char const *um = "aaaa"; // String original
    char    *um_func = ft_strmapi(um, func_apl); // Aplica a função 'func_apl' à string 'um'
    
    if (um_func) // Verifica se a nova string foi criada com sucesso
    {
        printf("%s\n", um_func); // Imprime a nova string
        free(um_func); // Libera a memória alocada para a nova string
    }
    else
    {
        return (0); // Retorna 0 se a nova string não foi criada
    }
    return 0; // Retorna 0 ao final da execução
}

