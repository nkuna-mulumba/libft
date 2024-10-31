/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:41:59 by jcongolo          #+#    #+#             */
/*   Updated: 2024/09/30 19:43:03 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // Inclui o cabeçalho da biblioteca padrão

/*
** A função ft_atoi converte uma string de caracteres numéricos em um inteiro.
** Ignora espaços em branco iniciais, interpreta um sinal opcional,
** e converte os caracteres numéricos subsequentes em um valor inteiro.
*/
int ft_atoi(const char *str)
{
    size_t i = 0; // Inicializa a variável 'i' para percorrer a string

    // Ignorar espaços em branco iniciais (tabulação, nova linha, espaço, etc.)
    while (((unsigned char)str[i] >= 9 && (unsigned char)str[i] <= 13) || ((unsigned char)str[i] == 32))
    {
        i++;
    }

    int sign = 1; // Inicializa a variável 'sign' com 1 (positivo)

    // Verificar se há um sinal '+' ou '-'
    if (((unsigned char)str[i] == 43) || ((unsigned char)str[i] == 45))
    {
        // Se o sinal for '-', ajustar a variável 'sign' para -1
        if ((unsigned char)str[i] == 45)
        {
            sign = -1;
        }
        i++;
    }

    int converte = 0; // Inicializa a variável 'converte' com 0

    // Converter os caracteres numéricos em um valor inteiro
    while (((unsigned char)str[i] >= 48) && ((unsigned char)str[i] <= 57))
    {
        // Acumular o valor numérico na variável 'converte'
        converte = (converte * 10) + ((unsigned char)str[i] - 48);
        i++;
    }

    // Retornar o valor convertido, aplicando o sinal
    return (sign * converte);
}
/*
int main()
{
    const char str1[] = "  -1234"; // String de exemplo com um número negativo
    const char str2[] = "5678"; // String de exemplo com um número positivo
    const char str3[] = "  +42"; // String de exemplo com um número positivo e sinal de mais

    // Chama ft_atoi para converter as strings em inteiros
    int num1 = ft_atoi(str1);
    int num2 = ft_atoi(str2);
    int num3 = ft_atoi(str3);

    // Imprime os valores convertidos
    printf("String '%s' convertida para inteiro: %d\n", str1, num1);
    printf("String '%s' convertida para inteiro: %d\n", str2, num2);
    printf("String '%s' convertida para inteiro: %d\n", str3, num3);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
*/