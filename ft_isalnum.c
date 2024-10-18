/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:48:08 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/18 17:48:32 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Função para verificar se um caractere é alfanumérico
int ft_isalnum(int c)
{
    // Verifica se o caractere é uma letra minúscula ou maiúscula
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return 1; // Retorna 1 se for uma letra
    }
    // Verifica se o caractere é um dígito
    else if (c >= '0' && c <= '9')
    {
        return 2; // Retorna 2 se for um dígito
    }
    else
    {
        return 0; // Retorna 0 se não for alfanumérico
    }
}

int main()
{
    char alNum; // Declaração da variável para armazenar o caractere inserido

    // Solicita ao usuário que insira um caractere alfanumérico
    printf("Digite qualquer tipo de digito que seja AlfaNumerico: ");
    scanf("%c", &alNum); // Lê o caractere inserido pelo usuário
    
    int result = ft_isalnum(alNum); // Chama a função ft_isalnum e armazena o resultado
    if (result == 1)
    {       
        // Se o resultado for 1, o caractere é uma letra
        printf("%c é uma letra\n", alNum);
    }
    else if (result == 2)
    {
        // Se o resultado for 2, o caractere é um dígito
        printf("%c é um dígito decimal\n", alNum);
    }
    else
    {
        // Se o resultado for 0, o caractere não é alfanumérico
        printf("%c não é alfanumérico\n", alNum);
    }
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

