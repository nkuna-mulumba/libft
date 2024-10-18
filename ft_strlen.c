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

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

size_t	ft_strlen(const char *s) // Declaração da função ft_strlen que recebe uma string e retorna seu comprimento
{
	size_t	i; // Declaração da variável i do tipo size_t

	i = 0; // Inicializa i com 0
	while (s[i] != '\0') // Loop que continua enquanto o caractere atual não for o caractere nulo
	{
		i++; // Incrementa i
	}
	return (i); // Retorna o comprimento da string
}

/* int main() // Função principal
{
	char	nome[]; // Declaração do array de caracteres nome
	printf("Introza o seu nome para te mostrar a longitude.\n"); // Imprime uma mensagem pedindo o nome do usuário
	scanf("%s", nome); // Lê o nome do usuário e armazena em nome
	
	size_t j; // Declaração da variável j do tipo size_t

	j = ft_strlen(nome); // Chama a função ft_strlen para obter o comprimento do nome
	printf("A longitude de : %s é : %zu caracteres. \n", nome, j); // Imprime o comprimento do nome
	
	return 0; // Retorna 0 para indicar que o programa terminou com sucesso
} */

