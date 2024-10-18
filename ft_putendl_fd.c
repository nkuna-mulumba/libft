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
#include <fcntl.h> // Inclui a biblioteca para manipulação de arquivos
#include <stdio.h> // Inclui a biblioteca para entrada e saída padrão
#include <unistd.h> // Inclui a biblioteca para chamadas ao sistema POSIX

// Função que escreve uma string seguida de uma nova linha em um descritor de arquivo
void ft_putendl_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s)); // Escreve a string 's' no descritor de arquivo 'fd'
    write(fd, "\n", 1); // Escreve uma nova linha no descritor de arquivo 'fd'
}

int main()
{
    // Abre o arquivo "test.txt" para escrita, criação se não existir, e adição ao final
    int fd = open("test.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
    if (fd < 0) // Verifica se houve erro ao abrir o arquivo
    {
        perror("Error opening file"); // Imprime mensagem de erro
        return 1; // Retorna 1 para indicar erro
    }

    char str[100]; // Declara um array de caracteres para armazenar a string de entrada
    printf("Introduce una cadena: "); // Solicita ao usuário que insira uma string
    fgets(str, sizeof(str), stdin); // Lê a string de entrada do usuário

    ft_putendl_fd(str, fd); // Chama a função para escrever a string no arquivo
    close(fd); // Fecha o descritor de arquivo
    return 0; // Retorna 0 para indicar sucesso
}

