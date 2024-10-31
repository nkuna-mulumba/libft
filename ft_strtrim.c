/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:31:27 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/16 16:26:32 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** Objetivo principal: A função ft_strtrim remove todos os caracteres da string 'set' do início
** e do fim da string 's1' até encontrar um caractere que não pertença ao 'set'.
*/
char *ft_strtrim(char const *s1, char const *set)
{
    size_t inicio; // Índice para o início da string
    size_t fim;    // Índice para o fim da string
    char *sub_s1;  // Ponteiro para a substring resultante

    // Verifica se s1 ou set são nulos
    if (!s1 || !set)
    {
        return (NULL); // Retorna NULL se s1 ou set forem nulos
    }

    inicio = 0; // Inicializa o índice de início

    // Incrementa o índice de início enquanto os caracteres de s1 estiverem em set
    while (s1[inicio] && ft_strchr(set, s1[inicio]))
    {
        inicio++;
    }

    fim = ft_strlen(s1); // Inicializa o índice de fim com o comprimento de s1

    // Decrementa o índice de fim enquanto os caracteres de s1 estiverem em set
    while (fim > inicio && ft_strchr(set, s1[fim - 1]))
    {
        fim--;
    }

    // Cria a substring resultante usando ft_substr para alocar a memória e string do meio
    sub_s1 = ft_substr(s1, inicio, fim - inicio);

    return (sub_s1); // Retorna a substring resultante
}

/*
int main()
{
    const char s1[] = "   Exemplo de teste   "; // String de exemplo com espaços em branco
    const char set[] = " "; // Conjunto de caracteres a serem removidos

    // Chama ft_strtrim para remover os caracteres de set do início e do fim de s1
    char *resultado = ft_strtrim(s1, set);

    // Verifica se a função retornou uma substring válida
    if (resultado != NULL)
    {
        // Imprime a substring resultante
        printf("String original: '%s'\n", s1);
        printf("String após ft_strtrim: '%s'\n", resultado);
        // Libera a memória alocada para a substring
        free(resultado);
    }
    else
    {
        // Imprime uma mensagem de erro se a função falhar
        printf("Erro: Falha ao remover caracteres.\n");
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/