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

int	ft_valid_argument(const char *str)
{
	// Verifica se a string é nula ou vazia
	if (!str || str[0] == '\0')
		return (0);
	// Validação inicial da string completa usando ft_digit_valid
	if (!ft_digit_valid(str))
		return (0);
	// Divide a string em substrings usando ft_split
	char **args = ft_split(str, ' ');
	if (!args) // Verifica se ft_split falhou
		return (0);
	// Verifica cada substring individualmente
	int i = 0;
	while (args[i] != NULL)
	{
		if (!ft_digit_valid(args[i]))
		{
			ft_freememoria(args);
			return (0);
		}
		i++;
	}
	ft_freememoria(args); // Libera a memória alocada por ft_split
	return (1); // Tudo válido
}