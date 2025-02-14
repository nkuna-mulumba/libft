/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-04 14:26:18 by jcongolo          #+#    #+#             */
/*   Updated: 2025-02-04 14:26:18 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digit_valid(const char *str)
{
	int	has_sign;

	if (!str || str[0] == '\0') // Verifica se a string é nula ou vazia
		return (0);
	has_sign = 0; // Flag para verificar se já encontramos um sinal (+/-)
	while (*str)
	{
		if (*str == '-' || *str == '+')// Permite sinais no início
		{
			if (has_sign || *(str + 1) == '\0')
				// Não permite múltiplos sinais ou sinal isolado
				return (0);
			has_sign = 1;// Indica que encontramos um sinal
		}
		else if (!ft_isdigit(*str))// Se não for dígito, retorna inválido
			return (0);
		str++; // Avança para o próximo caractere
	}
	return (1); // Tudo válido
}