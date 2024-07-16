/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:49:59 by denrodri          #+#    #+#             */
/*   Updated: 2024/01/20 20:47:42 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*pstr1;
	const unsigned char	*pstr2;
	size_t				i;
	int					resultado;

	pstr1 = str1;
	pstr2 = str2;
	resultado = 0;
	i = 0;
	while (i < n)
	{
		if (*pstr1 != *pstr2)
		{
			resultado = *pstr1 - *pstr2;
			return (resultado);
		}
		pstr1++;
		pstr2++;
		i++;
	}
	return (0);
}

/* int	main(void)
{
	const char	string1[] = "Hola";
	const char	string2[] = "HolAa";
	int			resultado;

	resultado = ft_memcmp(string1, string2, 5 * sizeof(char));
	printf("El resultado es: %d", resultado);
} */
