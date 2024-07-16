/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:14:12 by denrodri          #+#    #+#             */
/*   Updated: 2024/01/20 20:47:37 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *) &(str[i]));
		i++;
	}
	return (NULL);
}

/* int main() {
    const char *str = "Hello, World!";
    char search_char = 'W';

    const char *result = ft_memchr(str, search_char, strlen(str));

    if (result != NULL)
	{
        printf("Encontrado en la posición %ld\n", result - str);
    } else
	{
        printf("No se encontró '%c' en la cadena.\n", search_char);
    }

    return 0;
} */
