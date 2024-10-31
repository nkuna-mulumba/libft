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

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** A função ft_strstr procura a primeira ocorrência da substring 'needle' na string 'haystack'.
** Retorna um ponteiro para a posição inicial da substring em 'haystack' ou NULL se 'needle' não for encontrado.
*/
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
            const char *n = needle;  // Ponteiro para o início de 'needle'
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
/*
int main()
{
    const char haystack[] = "Este é um exemplo de teste."; // String de exemplo 'haystack'
    const char needle[] = "exemplo"; // Substring 'needle' a ser procurada

    // Chama ft_strstr para procurar 'needle' em 'haystack'
    char *resultado = ft_strstr(haystack, needle);

    // Verifica o resultado da busca
    if (resultado != NULL)
    {
        printf("Substring '%s' encontrada em: %s\n", needle, resultado);
    }
    else
    {
        printf("Substring '%s' não encontrada em '%s'.\n", needle, haystack);
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/