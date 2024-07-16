/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:43:43 by denrodri          #+#    #+#             */
/*   Updated: 2024/01/19 16:10:04 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *source, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize == 0)
	{
		while (source[i])
		{
			i++;
		}
		return (i);
	}
	while (source[i] && i < destsize - 1)
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
	while (source[i])
		i++;
	return (i);
}

/*int main() {
    char destination[20];
    const char *source = "Hola, mundo!";
    size_t copied_length;

    copied_length = ft_strlcpy(destination, source, sizeof(destination));

    printf("Cadena de destino: %s\n", destination);
    printf("Longitud total de la cadena fuente copiada: %zu\n", copied_length);

    return (0);
}*/
