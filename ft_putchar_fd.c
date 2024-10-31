/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pitchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:32:00 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/06 18:39:00 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca personalizada "libft.h"

/*
** A função ft_putchar_fd escreve o caractere 'c' no descritor de arquivo 'fd'.
** Se o descritor de arquivo for válido, a função escreve o caractere no arquivo associado.
*/
void ft_putchar_fd(char c, int fd)
{
    if (fd >= 0) // Verifica se o descritor de arquivo é válido
    {
        write(fd, &c, 1); // Escreve o caractere 'c' no arquivo associado ao descritor 'fd'
    }
}
/*
int main()
{
    char caractere = 'A'; // Caractere a ser escrito
    int fd = 1; // File descriptor para a saída padrão (stdout)

    // Chama ft_putchar_fd para escrever o caractere no file descriptor
    ft_putchar_fd(caractere, fd);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/