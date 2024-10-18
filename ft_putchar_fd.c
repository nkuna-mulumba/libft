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
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <fcntl.h> // Inclui a biblioteca para manipulação de arquivos

// Declara a função ft_putchar_fd que recebe um caractere 'c' e um descritor de arquivo 'fd'
void ft_putchar_fd(char c, int fd)
{
    if (fd >= 0) // Verifica se o descritor de arquivo é válido
    {
        write(fd, &c, 1); // Escreve o caractere 'c' no arquivo associado ao descritor 'fd'
    }
}
/*
int main() {
    // Abre o arquivo "test.txt" para escrita, cria o arquivo se não existir e adiciona ao final do arquivo
    int fd = open("test.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
    if (fd < 0) // Verifica se houve erro ao abrir o arquivo
    {
        perror("Error opening file"); // Imprime uma mensagem de erro se o arquivo não puder ser aberto
        return 1; // Retorna 1 para indicar que houve um erro
    }

    char c; // Declara uma variável 'c' do tipo caractere
    printf("Introduce un carácter: "); // Solicita ao usuário que insira um caractere
    c = getchar(); // Lê um caractere digitado pelo usuário
    ft_putchar_fd(c, fd); // Chama a função ft_putchar_fd para escrever o caractere no arquivo

    close(fd); // Fecha o arquivo
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/

