/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:07:09 by denrodri          #+#    #+#             */
/*   Updated: 2024/01/20 20:55:15 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	ft_bzero(void *b, size_t len)
{
	unsigned char	*s;
	size_t			i;

	s = b;
	i = 0;
	while (i < len)
	{
		s[i] = '\0';
		i++;
	}
}

/*
int main() {
    char myString[10] = "Hola"; // Un array de caracteres

    // Imprimir el contenido antes de llamar a ft_bzero
    printf("Antes de ft_bzero: %s\n", myString);

    // Llamar a ft_bzero para establecer a cero el contenido del array
    ft_bzero(myString, sizeof(myString));

    // Imprimir el contenido después de llamar a ft_bzero
    printf("Después de ft_bzero: %s\n", myString);

    return 0;
}
*/