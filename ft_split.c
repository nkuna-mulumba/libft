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
//Contagem de substrings
static int	ft_count_substrings(char const *s, char c)
{
	int	i;
	int	is_substring;
	int	num_substrings;

	if (!s)
		return (0);
	i = 0;
	is_substring = 0;
	num_substrings = 0;
	while (s[i])
	{
		if (s[i] != c && is_substring == 0)
		{
			is_substring = 1;
			num_substrings++;
		}
		else if (s[i] == c)
			is_substring = 0;
		i++;
	}
	return (num_substrings);
}

// Preenche o array de substrings com as partes divididas da string de entrada 's' usando o delimitador 'c'
int	ft_fill_substrings(const char *s, char c, char **split_strings)
{
	int	i;
	int	substr_start;
	int	index_substr;

	i = 0;
	substr_start = -1;
	index_substr = 0;
	while (s[i])
	{
		if (s[i] != c && substr_start < 0)
			substr_start = i;
		if ((s[i] == c || s[i + 1] == '\0') && (substr_start >= 0))
		{
			split_strings[index_substr++] = ft_substr(s, substr_start,
					i - substr_start + (s[i] != c));
			substr_start = -1;
			if (!split_strings[index_substr - 1])
				return (0);
		}
		i++;
	}
	split_strings[index_substr] = NULL;
	return (1);
}

// Libera a memória alocada para as substrings
void	ft_freememoria(char **split_strings)
{
	int	i;

	if (!split_strings)
 		return;
	i = 0;
	while (split_strings[i])
	{
		free(split_strings[i]);
		split_strings[i] = NULL;
		i++;
	}
	free(split_strings);
	split_strings = NULL;
}

// Divide a string 's' usando o delimitador 'c' e retorna um array de substrings
char	**ft_split(char const *s, char c)
{
	char	**split_strings;

	if (!s)
		return (0);
	split_strings = malloc((ft_count_substrings(s, c) + 1) * sizeof(char *));
	if (!split_strings)
		return (NULL);
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
