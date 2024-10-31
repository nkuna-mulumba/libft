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

/*
** A função ft_putnbr_fd escreve um número inteiro 'n' no descritor de arquivo 'fd'.
*/
void ft_putnbr_fd(int n, int fd)
{
    // Verifica se o número é o menor valor possível de um int
    if (n == -2147483648)
    {
        ft_putstr_fd("-2147483648", fd); // Escreve o menor valor possível de um int no arquivo
        return; // Retorna para evitar mais processamento
    }
    // Verifica se o número é negativo
    else if (n < 0)
    {
        ft_putchar_fd('-', fd); // Escreve o sinal de menos no arquivo
        n = -n; // Converte o número para positivo
    }
    // Verifica se o número é maior ou igual a 10
    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd); // Chama a função recursivamente com o quociente de n dividido por 10
    }
    ft_putchar_fd((n % 10) + '0', fd); // Escreve o dígito no arquivo
}
/*
int main()
{
    int num = 12345; // Número a ser escrito
    int fd = 1; // File descriptor para a saída padrão (stdout)

    // Chama ft_putnbr_fd para escrever o número no file descriptor
    ft_putnbr_fd(num, fd);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/