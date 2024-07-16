/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:20:09 by denrodri          #+#    #+#             */
/*   Updated: 2024/01/21 16:50:22 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/*
int main()
{
    char caracter;

    printf("Introduce un caracter: ");
    scanf(" %c", &caracter);

    if (my_isalnum(caracter)) {
        printf("%c es alfanumérico.\n", caracter);
    } else {
        printf("%c no es alfanumérico.\n", caracter);
    }

    return 0;
}
*/