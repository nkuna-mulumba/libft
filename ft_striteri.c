/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 21:06:02 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/06 21:16:10 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** A função ft_striteri aplica uma função 'f' a cada caractere da string 's',
** passando o índice e o endereço do caractere para a função 'f'.
*/
void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i = 0; // Inicializa o índice

    // Percorre a string até encontrar o caractere nulo '\0'
    while (s[i] != '\0')
    {
        f(i, &s[i]); // Aplica a função f ao caractere atual, passando o índice e o endereço do caractere
        i++; // Incrementa o índice
    }
}

/*
** Função de exemplo que modifica cada caractere adicionando o índice ao valor ASCII do caractere.
*/
void apl_func(unsigned int i, char *c)
{
    *c = *c + i; // Modifica o caractere
}
/*
int main()
{
    char str[] = "Exemplo"; // String de exemplo

    // Chama ft_striteri para aplicar apl_func a cada caractere da string
    ft_striteri(str, apl_func);

    // Imprime a string modificada
    printf("String modificada: %s\n", str);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/