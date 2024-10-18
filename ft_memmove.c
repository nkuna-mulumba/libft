/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:44:37 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/23 16:45:07 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

void	*ft_memmove(void *dest, const void *src, size_t n) // Declara a função ft_memmove que move n bytes de src para dest
{
	unsigned char		*d; // Declara um ponteiro d para o destino
	const unsigned char	*s; // Declara um ponteiro s para a origem
	size_t				i; // Declara uma variável i para uso no loop

	d = (unsigned char *)dest; // Converte o ponteiro de destino para unsigned char
	s = (unsigned char *)src; // Converte o ponteiro de origem para unsigned char
	if (d < s) // Verifica se o destino está antes da origem na memória
	{
		i = 0; // Inicializa i com 0
		while (i < n) // Loop para copiar os bytes de src para dest
		{
			d[i] = s[i]; // Copia o byte de src para dest
			i++; // Incrementa i
		}
	}
	else // Se o destino está depois da origem na memória
	{
		i = n; // Inicializa i com n
		while (i > 0) // Loop para copiar os bytes de src para dest de trás para frente
		{
			i--; // Decrementa i
			d[i] = s[i]; // Copia o byte de src para dest
		}
	}
	return (dest); // Retorna o ponteiro de destino
}

/*
int main() // Função principal
{
	char	destino[50]; // Declara um array de caracteres para armazenar a string de destino
	ft_memmove(destino, "Hola", 3); // Chama a função ft_memmove para copiar 3 bytes da string "Hola" para o array destino
	destino[3] = '\0'; // Adiciona o caractere nulo no final da string de destino
	printf("Seu DESTINO foi copiada com: %s\n", destino); // Imprime a string copiada
	return 0; // Retorna 0 para indicar que o programa terminou com sucesso
	
	char	origem[10]; // Declara um array de caracteres para armazenar a string de origem
	size_t	bytes; // Declara uma variável para armazenar o número de bytes a serem copiados
	printf("Digite um nome a ser copiada para DESTINO como maximo de 9 caracteres ou digitos:"); // Pede ao usuário para digitar uma string de até 9 caracteres
	scanf("%9s", origem); // Lê a string digitada pelo usuário
	printf("Introduza tamanho maximo 9 bytes para a execuçao:"); // Pede ao usuário para digitar o número de bytes a serem copiados
	scanf("%zu", &bytes); // Lê o número de bytes digitado pelo usuário
	ft_memmove(destino, origem, bytes); // Chama a função ft_memmove para copiar os bytes da string de origem para o array destino
	printf("Foi copiada no DESTINO: %s\n", destino); // Imprime a string copiada
	return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/

