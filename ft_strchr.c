/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:44:23 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/17 16:27:50 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** A função ft_strchr procura a primeira ocorrência do caractere 'c' na string 's'.
** Retorna um ponteiro para a primeira ocorrência do caractere ou NULL se não encontrado.
*/
char *ft_strchr(const char *s, int c)
{
    size_t i; // Declaração da variável 'i' para usar como índice
    char *str; // Declaração do ponteiro para a string

    str = (char *)s; // Converte 's' para 'char *'
    i = 0; // Inicializa o índice 'i' com 0

    // Loop para percorrer a string até encontrar o caractere nulo
    while (str[i] != '\0')
    {
        // Verifica se o caractere atual é igual ao caractere 'c'
        if (str[i] == (char)c)
        {
            return (&str[i]); // Retorna um ponteiro para a primeira ocorrência do caractere
        }
        i++; // Incrementa o índice 'i' para verificar o próximo caractere
    }

    // Verifica se o caractere final é igual ao caractere 'c'
    if (str[i] == (char)c)
    {
        return (&str[i]); // Retorna um ponteiro para a primeira ocorrência do caractere
    }

    return (NULL); // Retorna NULL se o caractere não for encontrado
}
/*
int main()
{
    const char nome[] = "meu irmao"; // Declara uma string chamada 'nome'
    char caractere = 'i'; // Declara o caractere a ser procurado
    char *ocorrencia = ft_strchr(nome, caractere); // Chama a função ft_strchr para encontrar a primeira ocorrência do caractere na string

    // Se a ocorrência não for NULL, significa que o caractere foi encontrado
    if (ocorrencia != NULL)
    {
        printf("O caractere '%c' é encontrado na substring: '%s'\n", caractere, ocorrencia); // Imprime a substring a partir da primeira ocorrência do caractere
    }
    else
    {
        printf("O caractere '%c' não é encontrado na string '%s'\n", caractere, nome); // Imprime a mensagem indicando que o caractere não foi encontrado
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/