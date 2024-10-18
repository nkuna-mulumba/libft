/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:22:17 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/21 21:23:13 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Função que zera os primeiros 'n' bytes da área de memória apontada por 's'
void ft_bzero(void *s, size_t n)
{
    unsigned char *str;
    size_t i;

    // Converte o ponteiro 's' para um ponteiro de unsigned char
    str = (unsigned char *)s;
    i = 0;

    // Itera sobre os primeiros 'n' bytes e os zera
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
}

int main()
{
    char org[50]; // Declara um array de 50 caracteres
    size_t bytes; // Declara uma variável para armazenar o número de bytes

    // Solicita ao usuário o número de bytes a serem zerados
    printf("Quantas memoria necessitas a locar com zero ou seja nulo?\n");
    scanf("%zu", &bytes);

    // Chama a função ft_bzero para zerar os primeiros 'bytes' do array 'org'
    ft_bzero(org, bytes);

    // Imprime o valor preenchido na variável 'org'
    printf("Valor preenchido na variavel ORG é: %s\n", org);

    return 0; // Indica que o programa terminou corretamente
}

