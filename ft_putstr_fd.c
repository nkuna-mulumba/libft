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
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <fcntl.h> // Inclui a biblioteca para manipulação de ficheiros
#include <unistd.h> // Inclui a biblioteca para chamadas ao sistema POSIX

// Função que escreve uma string 's' no descritor de ficheiro 'fd'
void ft_putstr_fd(char *s, int fd)
{
    // Escreve a string 's' no descritor de ficheiro 'fd'
    write(fd, s, ft_strlen(s));
}
/*
int main()
{
    // Abre (ou cria) o ficheiro "test.txt" para escrita, com permissão de anexar dados
    int fd = open("test.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
    
    // Verifica se houve erro ao abrir o ficheiro
    if (fd < 0)
    {
        // Imprime uma mensagem de erro se não conseguiu abrir o ficheiro
        perror("Error opening file");
        return 1; // Retorna 1 para indicar erro
    }

    char str[100]; // Declara um buffer para armazenar a string de entrada
    printf("Introduce una cadena: "); // Pede ao usuário para introduzir uma string
    fgets(str, sizeof(str), stdin); // Lê uma linha de texto da entrada padrão (teclado)

    // Chama a função para escrever a string no ficheiro
    ft_putstr_fd(str, fd);
    
    // Fecha o ficheiro
    close(fd);
    return 0; // Retorna 0 para indicar sucesso
}
*/
