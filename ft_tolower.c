/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:26:19 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/25 18:27:01 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>   // Inclui a biblioteca ctype.h para funções de manipulação de caracteres
#include <stdio.h>   // Inclui a biblioteca stdio.h para funções de entrada e saída

// Função que converte um caractere maiúsculo para minúsculo
int ft_tolower(int c)
{
    if ((c >= 'A') && (c <= 'Z'))  // Verifica se o caractere está entre 'A' e 'Z'
    {
        return (c + 32);  // Converte o caractere para minúsculo somando 32 ao valor ASCII
    }
    else
    {
        return (c);  // Retorna o caractere original se não for maiúsculo
    }
}

int main()
{
    char mauscula[50] = "NKUNA";  // Inicializa a string com caracteres maiúsculos
    char menuscula[50];  // Declara uma string para armazenar os caracteres minúsculos
    int i = 0;  // Inicializa o índice para percorrer a string

    while (mauscula[i] != '\0')  // Loop até o final da string (caractere nulo)
    {
        menuscula[i] = ft_tolower(mauscula[i]);  // Converte cada caractere para minúsculo
        i++;  // Incrementa o índice
    }
    menuscula[i] = '\0';  // Adiciona o caractere nulo ao final da string convertida
    printf("Caracteres maiuscula: %s é convertido para caracteres menuscula: %s.\n", mauscula, menuscula);  // Imprime as strings original e convertida
    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}

