/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:42:57 by denrodri          #+#    #+#             */
/*   Updated: 2024/01/19 16:09:31 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*d;
	size_t	i;

	i = 0;
	len = ft_strlen(s1);
	if (s1 == NULL)
		return (NULL);
	d = (char *)malloc(sizeof(char) * (len + 1));
	if (d == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		d[i] = s1[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

/* int main(void)
{
	const char *original = "Hello, World!";
	char *duplicado = ft_strdup(original);

	if (duplicado == NULL)
	{
		printf("Error al duplicar la cadena.\n");
		return 1;
	}

	printf("Original: %s\n", original);
	printf("Duplicado: %s\n", duplicado);
	free(duplicado);

	return 0;
} */
