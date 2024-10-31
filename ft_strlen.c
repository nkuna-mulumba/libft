/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:31:38 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/20 19:32:54 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** A função ft_strlen calcula o comprimento da string 's' passada como argumento.
** Retorna o número de caracteres na string, excluindo o terminador nulo '\0'.
*/
size_t ft_strlen(const char *s)
{
    size_t i; // Declaração da variável i do tipo size_t

    i = 0; // Inicializa i com 0
    
    // Loop que continua enquanto o caractere atual não for o caractere nulo
    while (s[i] != '\0')
    {
        i++; // Incrementa i
    }

    return (i); // Retorna o comprimento da string
}
/*
int main()
{
    const char str[] = "Exemplo de teste"; // String de exemplo
    size_t comprimento = ft_strlen(str); // Chama ft_strlen para calcular o comprimento da string

    // Imprime o comprimento da string
    printf("Comprimento da string: %zu\n", comprimento);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/