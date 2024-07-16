/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:34:16 by denrodri          #+#    #+#             */
/*   Updated: 2024/01/21 16:19:50 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	size_t				i;

	dest_ptr = dest;
	src_ptr = src;
	i = 0;
	while (dest == src || !n)
		return (dest);
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}

/*
int main() {
    int source[] = {1, 2, 3, 4, 5};
    int destination[5];

    // Copiar el bloque de memoria desde source hasta destination
    my_memcpy(destination, source, sizeof(source));

    // Imprimir los valores en destination para verificar la copia
    for (size_t i = 0; i < sizeof(destination) / sizeof(destination[0]); i++) {
        printf("%d ", destination[i]);
    }

    return 0;
}
*/
