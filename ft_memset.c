/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 21:06:17 by denrodri          #+#    #+#             */
/*   Updated: 2024/01/12 19:22:59 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = b;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*
int main()
{
    char str[50] = "Hola Me llamo denis";
    printf("\nBefore memset(): %s\n", str);
  
    ft_memset(str + 4, 'X', 12*sizeof(char));
  
    printf("After memset():  %s", str);
    return 0;
}
*/
