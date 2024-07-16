/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:32:32 by denrodri          #+#    #+#             */
/*   Updated: 2024/01/21 16:10:24 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*
int main() {
    char caracter;

    printf("Introduce un caracter: ");
    scanf(" %c", &caracter);

    if (my_isascii(caracter)) {
        printf("%c es un caracter ASCII válido.\n", caracter);
    } else {
        printf("%c no es un caracter ASCII válido.\n", caracter);
    }

    return 0;
}
*/
