/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 20:31:26 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/17 19:43:47 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** A função ft_calloc aloca memória para um array de 'nmemb' elementos de 'size' bytes cada,
** e inicializa todos os bytes da memória alocada com zero.
** Retorna um ponteiro para a memória alocada ou NULL se a alocação falhar.
*/
void *ft_calloc(size_t nmemb, size_t size)
{
    size_t total_size; // Declaração da variável para armazenar o tamanho total da memória a ser alocada
    void *ptr; // Declaração do ponteiro para a memória alocada
    char *ptr_ptr; // Declaração do ponteiro para inicializar a memória com zero
    size_t i; // Declaração da variável 'i' para uso como índice

    total_size = nmemb * size; // Calcula o tamanho total da memória a ser alocada

    ptr = malloc(total_size); // Aloca memória
    if (ptr == NULL) // Verifica se a alocação de memória falhou
    {
        return (NULL); // Retorna NULL se a alocação de memória falhar
    }

    ptr_ptr = (char *)ptr; // Converte o ponteiro 'ptr' para 'char *' para inicialização

    i = 0; // Inicializa o índice 'i' com 0

    // Loop para inicializar todos os bytes da memória alocada com zero
    while (i < total_size)
    {
        ptr_ptr[i] = 0; // Inicializa o byte atual com zero
        i++; // Incrementa o índice 'i'
    }

    return (ptr); // Retorna o ponteiro para a memória alocada e inicializada
}
/*
int main()
{
    size_t nmemb = 10; // Número de elementos
    size_t size = sizeof(int); // Tamanho de cada elemento

    // Chama ft_calloc para alocar e inicializar memória
    int *arr = (int *)ft_calloc(nmemb, size);

    // Verifica se a alocação foi bem-sucedida
    if (arr != NULL)
    {
        // Imprime os valores inicializados
        for (size_t i = 0; i < nmemb; i++)
        {
            printf("Elemento %zu: %d\n", i, arr[i]);
        }

        // Libera a memória alocada
        free(arr);
    }
    else
    {
        printf("Erro: Falha na alocação de memória.\n");
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/