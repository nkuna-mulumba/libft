/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:17:59 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/24 18:18:14 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

size_t  ft_strlcat(char *dst, const char *src, size_t size) // Declara a função ft_strlcat que concatena strings
{
    size_t  i; // Declara a variável i para uso no loop
    size_t  src_len; // Declara a variável src_len para armazenar o comprimento da string src
    size_t  dst_len; // Declara a variável dst_len para armazenar o comprimento da string dst

    src_len = 0; // Inicializa src_len com 0
    dst_len = 0; // Inicializa dst_len com 0

    while ((dst[dst_len] != '\0') && (dst_len < size)) // Calcula o comprimento da string dst até encontrar o caractere nulo ou atingir o tamanho máximo
    {
        dst_len++; // Incrementa dst_len
    }

    while (src[src_len] != '\0') // Calcula o comprimento da string src até encontrar o caractere nulo
    {
        src_len++; // Incrementa src_len
    }

    if (dst_len == size) // Se dst_len for igual ao tamanho máximo, retorna o tamanho máximo mais o comprimento de src
    {
        return (size + src_len); // Retorna o tamanho máximo mais o comprimento de src
    }

    i = 0; // Inicializa i com 0
    while ((src[i] != '\0') && ((dst_len + i) < (size - 1))) // Concatena src em dst até encontrar o caractere nulo ou atingir o tamanho máximo menos 1
    {
        dst[dst_len + i] = src[i]; // Copia o caractere de src para dst
        i++; // Incrementa i
    }

    if ((dst_len + i) < size) // Se ainda houver espaço em dst, adiciona o caractere nulo no final
    {
        dst[dst_len + i] = '\0'; // Adiciona o caractere nulo no final de dst
    }
    return (dst_len + src_len); // Retorna o comprimento total das strings concatenadas
}

int main() // Função principal
{
    char saludar[40]= "hola"; // Declara e inicializa a string saludar com "hola"
    ft_strlcat(saludar, "como estas?", 40); // Chama a função ft_strlcat para concatenar "como estas?" em saludar
    printf("Foi concatenada %s\n", saludar); // Imprime a string concatenada
    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}

