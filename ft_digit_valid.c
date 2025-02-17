/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuna <nkuna@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-02 23:03:57 by nkuna             #+#    #+#             */
/*   Updated: 2025-02-02 23:03:57 by nkuna            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
	Função para validar se uma string contém apenas dígitos, 
	opcionalmente precedidos por um sinal '+' ou '-'
*/
int	ft_digit_valid(const char *str)
{
	// Verifica se o primeiro caractere é um sinal de '-' ou '+'
	if (*str == '-' || *str == '+')
	{
		// Avança o ponteiro para ignorar o sinal (caso exista)
		str++;
	}
	// Percorre cada caractere da string a partir da posição atual (após o sinal, se houver)
	while (*str)
	{
		// Verifica se o caractere atual NÃO é um dígito (usando a função ft_isdigit)
		if (!ft_isdigit(*str))
		{
			// Retorna 0 (inválido) se encontrar um caractere não numérico
			return (0);
		}
		// Avança para o próximo caractere da string
		str++;
	}
	// Retorna 1 (válido) se todos os caracteres após o sinal (se houver) forem dígitos
	return (1);
}