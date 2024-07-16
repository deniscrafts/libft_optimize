/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:26:00 by denrodri          #+#    #+#             */
/*   Updated: 2024/01/20 21:48:47 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c && *s)
		++s;
	if (*s)
		return ((char *)s);
	else if (!*s && 0 == (char)c)
		return ((char *)s);
	else
		return (NULL);
}

/* int main()
{
	char	str[] = "Hola, mundo!";
	char	*ptr;

    ptr = ft_strchr(str, 'm');

    if (ptr != NULL) {
        printf("El caracter 'm' se encuentra en la posición %ld\n", ptr - str);
    } else {
        printf("El caracter 'm' no se encuentra en la cadena.\n");
    }

    return 0;
}*/