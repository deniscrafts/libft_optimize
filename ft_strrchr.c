/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:01:50 by denrodri          #+#    #+#             */
/*   Updated: 2024/01/21 16:05:20 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if ((char)c == *(s + len))
			return ((char *)(s + len));
		--len;
	}
	return (NULL);
}

/* int main(void)
{
    char string[] = "computer program";
    char *ptr;
    int c;

    c = 'p';
    ptr = ft_strrchr(string, c);
    if (ptr != NULL)
        printf("La última ocurrencia de %c en '%s' es '%s'\n", c, string, ptr);
        printf("El carácter %c está en la posición %ld\n", c, ptr - string);
    else
        printf("El carácter %c no se encuentra en la cadena.\n", c);
    return 0;
} */
