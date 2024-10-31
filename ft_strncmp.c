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

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** A função ft_strncmp compara até 'n' caracteres das strings 's1' e 's2'.
** Retorna a diferença entre os primeiros caracteres diferentes encontrados.
** Retorna 0 se as strings forem iguais até 'n' caracteres.
*/
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i; // Declaração da variável 'i' para uso como índice

    i = 0; // Inicializa 'i' com 0

    // Loop que continua enquanto 'i' for menor que 'n' e nenhum dos caracteres das strings for '\0'
    while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
    {
        // Compara os caracteres das duas strings convertidos para 'unsigned char'
        if ((unsigned char)s1[i] != (unsigned char)s2[i])
        {
            // Retorna a diferença entre os caracteres se forem diferentes
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        }
        i++; // Incrementa 'i' para comparar o próximo caractere
    }
    return (0); // Retorna 0 se as strings forem iguais até 'n' caracteres
}
/*
int main()
{
    const char str1[] = "teste"; // Primeira string de exemplo
    const char str2[] = "testa"; // Segunda string de exemplo
    size_t n = 5; // Número de caracteres a comparar

    // Chama ft_strncmp para comparar as strings
    int resultado = ft_strncmp(str1, str2, n);

    // Verifica o resultado da comparação
    if (resultado < 0)
    {
        printf("A string '%s' é menor que a string '%s' nos primeiros %zu caracteres.\n", str1, str2, n);
    }
    else if (resultado > 0)
    {
        printf("A string '%s' é maior que a string '%s' nos primeiros %zu caracteres.\n", str1, str2, n);
    }
    else
    {
        printf("As strings '%s' e '%s' são iguais nos primeiros %zu caracteres.\n", str1, str2, n);
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/