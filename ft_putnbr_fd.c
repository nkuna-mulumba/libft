/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:59:17 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/06 21:00:35 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui a biblioteca libft.h para funções personalizadas

void ft_putnbr_fd(int n, int fd) // Função que escreve um número inteiro no arquivo especificado por fd
{
    if (n == -2147483648) // Verifica se o número é o menor valor possível de um int
    {
        ft_putstr_fd("-2147483648", fd); // Escreve o menor valor possível de um int no arquivo
        return; // Retorna para evitar mais processamento
    }
    else if (n < 0) // Verifica se o número é negativo
    {
        ft_putchar_fd('-', fd); // Escreve o sinal de menos no arquivo
        n = -n; // Converte o número para positivo
    }
    if (n >= 10) // Verifica se o número é maior ou igual a 10
    {
        ft_putnbr_fd(n / 10, fd); // Chama a função recursivamente com o quociente de n dividido por 10
    }
    ft_putchar_fd((n % 10) + '0', fd); // Escreve o dígito no arquivo
}

int main() // Função principal
{
    int fd = open("output.txt", O_WRONLY | O_CREAT, 0644); // Abre o arquivo output.txt para escrita, criando-o se não existir
    if (fd == -1) // Verifica se houve erro ao abrir o arquivo
    {
        perror("Erro de criar FD"); // Imprime mensagem de erro
        return 1; // Retorna 1 indicando erro
    }
    ft_putnbr_fd(-2147, fd); // Chama a função para escrever o número -2147 no arquivo
    close(fd); // Fecha o arquivo
    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}

