/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:40:35 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/23 16:41:03 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

size_t  ft_strlcpy(char *dst, const char *src, size_t size) // Declara a função ft_strlcpy que copia uma string para outra
{
    size_t  i; // Declara a variável i para uso no loop
    size_t  src_len; // Declara a variável src_len para armazenar o comprimento da string de origem
    
    i = 0;  // Inicializa i com 0
    src_len = 0; // Inicializa src_len com 0
    while (scr[src_len] != '\0') // Loop para calcular o comprimento da string de origem
    {
        src_len ++; // Incrementa src_len até encontrar o caractere nulo
    }
   
    if (size != 0) // Verifica se o tamanho do buffer de destino não é zero
    {
        while ((i < size - 1) && (src[i] != '\0')) // Loop para copiar a string de origem para o destino
        {
            dst[i] = src[i]; // Copia o caractere da origem para o destino
            i++; // Incrementa i
        }
        dst[i] = '\0'; // Adiciona o caractere nulo no final da string de destino
    }
    return (src_len); // Retorna o comprimento da string de origem
} 

int main() // Função principal
{
    char    destino[50]; // Declara um array de caracteres para armazenar a string de destino
  
    ft_strlcpy(destino, "Hola", 10); // Chama a função ft_strlcpy para copiar a string "Hola" para o array destino
    printf("A variavel DESTINO foi copiada com %s", destino); // Imprime a string copiada
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

