/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:00:50 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/06 19:01:04 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca personalizada "libft"

/*
** A função ft_putstr_fd escreve a string 's' no descritor de arquivo 'fd'.
** Se o descritor de arquivo for válido, a função escreve a string completa.
*/
void ft_putstr_fd(char *s, int fd)
{
    // Escreve a string 's' no descritor de arquivo 'fd'
    write(fd, s, ft_strlen(s));
}
/*
int main()
{
    char str[] = "Olá, mundo!"; // String a ser escrita
    int fd = 1; // File descriptor para a saída padrão (stdout)

    // Chama ft_putstr_fd para escrever a string no file descriptor
    ft_putstr_fd(str, fd);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/