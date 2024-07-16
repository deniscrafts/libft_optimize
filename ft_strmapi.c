/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:47:46 by denrodri          #+#    #+#             */
/*   Updated: 2024/01/20 20:44:06 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str || !s)
		return (NULL);
	while (i < ft_strlen(s))
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[ft_strlen(s)] = '\0';
	return (str);
}

/* char    to_uppercase(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')q
		return c - 'a' + 'A';
	return c;
}
int main()
{
	char original[] = "hello world";
	char *result;

	printf("Cadena original: %s\n", original);
	result = ft_strmapi(original, &to_uppercase);
	if (result)
	{
		printf("Cadena modificada: %s\n", result);
		free(result);
	}
	else
		printf("Error en la asignación de memoria.\n");
	return 0;
} */