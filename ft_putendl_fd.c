/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:20:19 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/06 20:20:34 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui a biblioteca personalizada "libft.h"

/*
** A função ft_putendl_fd escreve a string 's' seguida de uma nova linha no descritor de arquivo 'fd'.
** Se o descritor de arquivo for válido, a função escreve a string e adiciona uma nova linha.
*/
void ft_putendl_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s)); // Escreve a string 's' no descritor de arquivo 'fd'
    write(fd, "\n", 1); // Escreve uma nova linha no descritor de arquivo 'fd'
}
/*
int main()
{
    char str[] = "Olá, mundo!"; // String a ser escrita
    int fd = 1; // File descriptor para a saída padrão (stdout)

    // Chama ft_putendl_fd para escrever a string e uma nova linha no file descriptor
    ft_putendl_fd(str, fd);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/