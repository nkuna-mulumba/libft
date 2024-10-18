/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:04:35 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/18 16:50:08 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
função ft_split, que divide uma string de entrada s em substrings utilizando um delimitador c e armazena as substrings resultantes em um array de strings. 

				Principais Funções Auxiliares
ft_count_substrings: Conta o número de substrings que serão criadas a partir da string de entrada.

ft_fill_substrings: Preenche o array de substrings com as partes divididas da string de entrada.

ft_freememoria: Libera a memória alocada para as substrings em caso de erro.
*/

#include "libft.h"

// Conta o número de substrings na string de entrada 's' usando o delimitador 'c'
static int ft_count_substrings(char const *s, char c) {
    int i;
    int is_substring;
    int num_substrings;

    // Se 's' for NULL, retorna 0
    if (!s)
        return (0);

    i = 0;
    is_substring = 0;
    num_substrings = 0;

    // Percorre a string para contar substrings
    while (s[i]) {
        if (s[i] != c && is_substring == 0) {
            is_substring = 1;
            num_substrings++;
        } else if (s[i] == c) {
            is_substring = 0;
        }
        i++;
    }
    return (num_substrings);
}

// Preenche o array de substrings com as partes divididas da string de entrada 's' usando o delimitador 'c'
int ft_fill_substrings(const char *s, char c, char **split_strings) {
    int i;
    int substr_start;
    int index_substr;

    i = 0;
    substr_start = -1;
    index_substr = 0;

    // Percorre a string de entrada para criar e armazenar substrings
    while (s[i]) {
        if (s[i] != c && substr_start < 0)
            substr_start = i;
        if ((s[i] == c || s[i + 1] == '\0') && (substr_start >= 0)) {
            split_strings[index_substr++] = ft_substr(s, substr_start, i - substr_start + (s[i] != c));
            substr_start = -1;
            // Verifica se a alocação de memória para a substring foi bem-sucedida
            if (!split_strings[index_substr - 1])
                return (0);
        }
        i++;
    }
    // Termina o array de substrings com NULL
    split_strings[index_substr] = NULL;
    return (1);
}

// Libera a memória alocada para as substrings
void ft_freememoria(char **split_strings) {
    int i = 0;
    // Libera cada substring
    while (split_strings[i]) {
        free(split_strings[i]);
        i++;
    }
    // Libera o array de strings
    free(split_strings);
}

// Divide a string 's' usando o delimitador 'c' e retorna um array de substrings
char **ft_split(char const *s, char c) {
    char **split_strings;

    // Verifica se 's' é NULL
    if (!s)
        return (0);

    // Aloca memória para o array de substrings
    split_strings = malloc((ft_count_substrings(s, c) + 1) * sizeof(char *));
    if (!split_strings)
        return (NULL);

    // Preenche o array de substrings
    if (!ft_fill_substrings(s, c, split_strings)) {
        ft_freememoria(split_strings);
        return (NULL);
    }

    return (split_strings);
}

// Função main para testar ft_split
/*int main() {
    const char *input_string = "Eu sou Mangop";
    char delimiter = ' ';
    char **substrings_array = ft_split(input_string, delimiter);
    int i = 0;

    if (substrings_array) {
        while (substrings_array[i] != NULL) {
            printf("%s\n", substrings_array[i]);
            free(substrings_array[i]);
            i++;
        }
        free(substrings_array);
    } else {
        return (0);
    }
    return 0;
}
*/
