/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:48:45 by denrodri          #+#    #+#             */
/*   Updated: 2024/01/20 21:00:35 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*result;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	result = (char *)malloc(ft_strlen(s2) + ft_strlen(s1) + 1);
	if (!result)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		result[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		result [ft_strlen(s1) + i] = s2[i];
		i++;
	}
	result [ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (result);
}

/* int	main(void)
{
    const char *cadena1 = "Hello, ";
    const char *cadena2 = "World!";
    char *resultado = ft_strjoin(cadena1, cadena2);
    if (resultado == NULL)
    {
        printf("Error al concatenar las cadenas.\n");
        return 1;
    }
    printf("Cadena 1: %s\n", cadena1);
    printf("Cadena 2: %s\n", cadena2);
    printf("Resultado: %s\n", resultado);
    free(resultado);
    return 0;
} */
