/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:06:16 by denrodri          #+#    #+#             */
/*   Updated: 2024/01/19 16:14:25 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		return (ft_strdup(""));
	}
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc (sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/* int	main(void)
{
    const char *cadena_original = "Hello, World!";
    unsigned int inicio = 21;
    size_t longitud = 5;

    char *subcadena = ft_substr(cadena_original, inicio, longitud);
    if (subcadena == NULL) {
        printf("Error al extraer la subcadena.\n");
        return 1;
    }

    size_t longitud_original = ft_strlen(cadena_original);
    char *duplicado = ft_strdup(cadena_original);

    printf("Cadena original: %s\n", cadena_original);
    printf("Subcadena: %s\n", subcadena);
    printf("Longitud original: %zu\n", longitud_original);
    printf("Duplicado: %s\n", duplicado);
    free(subcadena);
    free(duplicado);
    return 0;
} */