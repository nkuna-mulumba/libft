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

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** A função ft_strmapi aplica a função 'f' a cada caractere da string 's'
** para criar uma nova string resultante da aplicação sucessiva de 'f'.
*/
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *s_f; // Ponteiro para a nova string
    size_t i; // Índice para iterar pela string

    // Verifica se os parâmetros são válidos
    if (!s || !f)
        return (NULL);

    // Aloca memória para a nova string
    s_f = malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!s_f) // Verifica se a alocação de memória foi bem-sucedida
        return (NULL);

    i = 0;
    // Itera por cada caractere da string original
    while (i < ft_strlen(s))
    {
        s_f[i] = f(i, s[i]); // Aplica a função 'f' ao caractere atual
        i++;
    }
    s_f[i] = '\0'; // Adiciona o caractere nulo ao final da nova string

    return (s_f); // Retorna a nova string
}

/*
** Função de exemplo que será aplicada a cada caractere.
** Retorna o caractere incrementado pelo índice.
*/
char func_apl(unsigned int i, char c)
{
    return (c + i); // Retorna o caractere incrementado pelo índice
}
/*
int main()
{
    char str[] = "Exemplo"; // String de exemplo

    // Chama ft_strmapi para aplicar func_apl a cada caractere da string
    char *resultado = ft_strmapi(str, func_apl);

    // Verifica se a nova string foi criada com sucesso
    if (resultado != NULL)
    {
        // Imprime a string resultante
        printf("String modificada: %s\n", resultado);
        // Libera a memória alocada para a nova string
        free(resultado);
    }
    else
    {
        // Imprime uma mensagem de erro se a criação da nova string falhar
        printf("Erro: Falha ao criar a nova string.\n");
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/

/*
Diferença entre ft_strmapi e ft_striteri
ft_strmapi: Aplica a função f a cada caractere da string s para criar uma nova string.
A função f recebe dois parâmetros: o índice do caractere na string e o próprio caractere.
O resultado é uma nova string alocada dinamicamente.
ft_striteri: Também aplica a função f a cada caractere da string s, mas não cria uma nova string.
Em vez disso, modifica a string s in-place (diretamente). A função f recebe dois parâmetros:
o índice do caractere na string e um ponteiro para o caractere, permitindo a modificação direta do caractere
 na string original.

Essas funções são semelhantes, mas ft_strmapi retorna uma nova string, enquanto ft_striteri modifica 
a string original.
*/