/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:20:16 by denrodri          #+#    #+#             */
/*   Updated: 2024/01/11 18:40:12 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (!result)
		return (NULL);
	else
	{
		ft_bzero(result, (count * size));
		return (result);
	}
}

/*
int main()
{
    size_t numElementos = 5;
    size_t tamanoElemento = sizeof(int);

    int *miArreglo = (int *)ft_calloc(numElementos, tamanoElemento);

    if (miArreglo == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    for (size_t i = 0; i < numElementos; ++i)
	{
        printf("%d ", miArreglo[i]);
    }

    free(miArreglo);
    return 0;
}
*/
