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

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** Função ft_split, que divide uma string de entrada s em substrings utilizando um delimitador c
** e armazena as substrings resultantes em um array de strings.
** 
** Principais Funções Auxiliares:
** ft_count_substrings: Conta o número de substrings que serão criadas a partir da string de entrada.
** ft_fill_substrings: Preenche o array de substrings com as partes divididas da string de entrada.
** ft_freememoria: Libera a memória alocada para as substrings em caso de erro.
*/


// Preenche o array de substrings com as partes divididas da string de entrada 's' usando o delimitador 'c'
int ft_fill_substrings(const char *s, char c, char **split_strings) {
    int i;             // Índice para percorrer a string de entrada
    int substr_start;  // Início da substring
    int index_substr;  // Índice da substring no array

	i = 0;
	substr_start = -1;
	index_substr = 0;

	// Percorre a string de entrada para criar e armazenar substrings
	while (s[i])
	{
		if (s[i] != c && substr_start < 0)
			substr_start = i;

		if ((s[i] == c || s[i + 1] == '\0') && (substr_start >= 0))
		{
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
    char **split_strings; // Array de substrings

	// Verifica se 's' é NULL
	if (!s)
		return (0);

	// Aloca memória para o array de substrings
	split_strings = malloc((ft_count_substrings(s, c) + 1) * sizeof(char *));
	if (!split_strings)
		return (NULL);
	// Preenche o array de substrings
	if (!ft_fill_substrings(s, c, split_strings))
	{
		ft_freememoria(split_strings);
		return (NULL);
	}
	return (split_strings);
}

/*
int main() {
    char **result;       // Array de substrings resultantes
    char str[] = "Olá, mundo! Vamos dividir esta string."; // String de exemplo
    int i = 0;

    // Chama ft_split para dividir a string usando o delimitador ' '
    result = ft_split(str, ' ');

    // Imprime cada substring resultante
    while (result[i] != NULL) {
        printf("Substring %d: %s\n", i, result[i]);
        i++;
    }

    // Libera a memória alocada para as substrings
    ft_freememoria(result);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/
