/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 22:10:52 by denrodri          #+#    #+#             */
/*   Updated: 2024/01/21 16:09:56 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
int main() {
    char caracter;

    printf("Introduce un caracter: ");
    scanf(" %c", &caracter);

    if (my_isprint(caracter)) {
        printf("%c es un caracter imprimible.\n", caracter);
    } else {
        printf("%c no es un caracter imprimible.\n", caracter);
    }

    return 0;
}
*/