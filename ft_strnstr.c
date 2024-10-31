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

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** A função ft_strnstr procura a substring 'little' dentro da string 'big' até o comprimento 'len'.
** Retorna um ponteiro para a posição inicial da substring em 'big' ou NULL se 'little' não for encontrado.
*/
char *ft_strnstr(const char *big, const char *little, size_t len)
{
    // Se 'little' for uma string vazia, retorna 'big'
    if (*little == '\0')
    {
        return (char *)big;
    }
    else
    {
        size_t i = 0; // Inicializa o índice 'i'

        // Loop principal até 'len' ou fim de 'big'
        while (i < len && big[i] != '\0')
        {
            const char *b = (char *)&big[i]; // Ponteiro para a posição atual em 'big'
            const char *l = little; // Ponteiro para 'little'
            size_t j = 0; // Inicializa o índice 'j'

            // Loop interno para comparar substrings
            while ((i + j < len) && (b[j] != '\0') && (l[j] != '\0') && (b[j] == l[j]))
            {
                j++; // Incrementa 'j' se os caracteres forem iguais
            }

            // Se 'little' foi encontrado em 'big'
            if (l[j] == '\0')
            {
                return (char *)&big[i]; // Retorna o ponteiro para a posição inicial da substring em 'big'
            }

            i++; // Incrementa 'i' para a próxima posição em 'big'
        }
    }

    return (NULL); // Retorna NULL se 'little' não for encontrado em 'big'
}
/*
int main()
{
    const char big[] = "Este é um exemplo de teste."; // String de exemplo 'big'
    const char little[] = "exemplo"; // Substring 'little' a ser procurada
    size_t len = 20; // Comprimento máximo da busca

    // Chama ft_strnstr para procurar 'little' em 'big'
    char *resultado = ft_strnstr(big, little, len);

    // Verifica o resultado da busca
    if (resultado != NULL)
    {
        printf("Substring '%s' encontrada em: %s\n", little, resultado);
    }
    else
    {
        printf("Substring '%s' não encontrada nos primeiros %zu caracteres de '%s'.\n", little, len, big);
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/