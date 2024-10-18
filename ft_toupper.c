/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:24:00 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/25 18:29:18 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>   // Inclui a biblioteca ctype.h para funções de manipulação de caracteres
#include <stdio.h>   // Inclui a biblioteca stdio.h para funções de entrada e saída

// Função que converte um caractere minúsculo para maiúsculo
int ft_toupper(int c)
{
    if ((c >= 'a') && (c <= 'z'))  // Verifica se o caractere está entre 'a' e 'z'
    {
        return (c - 32);  // Converte o caractere para maiúsculo subtraindo 32 do valor ASCII
    }
    else
    {
        return (c);  // Retorna o caractere original se não for minúsculo
    }
}

/*
int main()
{
    char menuscula[50] = "Hola";  // Inicializa a string com caracteres minúsculos
    char mauscula[50];  // Declara uma string para armazenar os caracteres maiúsculos
    int i = 0;  // Inicializa o índice para percorrer a string

    while (menuscula[i] != '\0')  // Loop até o final da string (caractere nulo)
    {
        mauscula[i] = ft_toupper(menuscula[i]);  // Converte cada caractere para maiúsculo
        i++;  // Incrementa o índice
    }
    mauscula[i] = '\0';  // Adiciona o caractere nulo ao final da string convertida
    printf("Menuscula: %s é convertido para Mauscula: %s\n", menuscula, mauscula);  // Imprime as strings original e convertida
    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}
*/

