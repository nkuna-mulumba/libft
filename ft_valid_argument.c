/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_argument.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-12 14:24:42 by jcongolo          #+#    #+#             */
/*   Updated: 2025-02-12 14:24:42 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Função de validação de argumentos
int	ft_valid_argument(const char *str)
{
	char	**args;
	int		i;

	// Dividir a string em substrings ao encontrar o delimitador espaço
	args = ft_split(str, " ");
	if (!args)// Verificar se a divisão falhou
		return (0);
	// Iterar sobre todas as substrings
	i = 0;
	while (args[i] != NULL)
	{
		// Validar se cada substring é um dígito válido
		if (!ft_digit_valid(args[i]))
		{
			ft_freememoria(args); //Liberar a memoria alocada
			return (0);
		}
		i++;
	}
	// Liberar a memória alocada
	ft_freememoria(args);
	return (1);
}