/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_dois.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 20:00:23 by jcongolo          #+#    #+#             */
/*   Updated: 2024/10/05 20:04:32 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Passos para criar a função split simplificada com while
Primeiro, contamos o número de substrings que serão geradas ao dividir a string s pelo caractere c usando um loop while.

Segundo, alocamos memória para o array de substrings.

Terceiro, percorremos a string s e preenchemos o array de substrings, alocando memória para cada substring e copiando os caracteres correspondentes, tudo isso usando loops while.

Dessa forma, conseguimos simplificar a implementação usando apenas loops while. Se precisar de mais alguma coisa, estou à disposição!
*/

// Função principal que divide a string em substrings
char **ft_split(char const *s, char c) {
    char **dst; // Array de substrings
    int i, j, k, l;

    if (s == NULL) // Se a string for nula, retorna NULL
        return NULL;

    // Contar o número de substrings
    i = 0;
    l = 0;
    while (s[i] != '\0') {
        if ((i == 0 || s[i - 1] == c) && s[i] != c)
            l++;
        i++;
    }

    // Alocar memória para o array de substrings
    dst = (char **)malloc(sizeof(char *) * (l + 1));
    if (dst == NULL) // Se a alocação falhar, retorna NULL
        return NULL;

    // Preencher o array de substrings
    i = 0;
    j = 0;
    while (s[i] != '\0') {
        if (s[i] != c) {
            k = 0;
            while (s[i + k] != c && s[i + k] != '\0')
                k++;
            dst[j] = (char *)malloc(sizeof(char) * (k + 1));
            if (dst[j] == NULL) { // Se a alocação falhar, liberar memória já alocada
                while (j > 0)
                    free(dst[--j]);
                free(dst);
                return NULL;
            }
            k = 0;
            while (s[i] != c && s[i] != '\0')
                dst[j][k++] = s[i++];
            dst[j][k] = '\0';
            j++;
        } else {
            i++;
        }
    }
    dst[j] = NULL; // Adiciona o ponteiro nulo ao final do array de substrings
    return dst; // Retorna o array de substrings
}

