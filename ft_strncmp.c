/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:56:43 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/26 20:56:56 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>  // Inclui a biblioteca padrão de manipulação de strings
#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída

// Função que compara até 'n' caracteres de duas strings
int ft_strncmp(const char *s1, const char *s2, size_t n)
{   
    size_t i;  // Declaração da variável 'i' para uso como índice
    
    i = 0;  // Inicializa 'i' com 0
    // Loop que continua enquanto 'i' for menor que 'n' e nenhum dos caracteres das strings for '\0'
    while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
    {
        // Compara os caracteres das duas strings convertidos para 'unsigned char'
        if ((unsigned char)s1[i] != (unsigned char)s2[i])
        {
            // Retorna a diferença entre os caracteres se forem diferentes
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        }
        i++;  // Incrementa 'i' para comparar o próximo caractere
    }
    return (0);  // Retorna 0 se as strings forem iguais até 'n' caracteres
}

int main()
{
    const char str1[] = "Angola";  // Declara e inicializa a string 'str1'
    const char str2[] = "Kongo";   // Declara e inicializa a string 'str2'
    int difer;  // Declara a variável 'difer' para armazenar o resultado da comparação
    
    // Chama a função 'ft_strncmp' para comparar as duas strings até 3 caracteres
    difer = ft_strncmp(str1, str2, 3);
    // Imprime o resultado da comparação
    printf("Resultado da comparaçao: %d\n", difer);
    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}

