/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:55:41 by denrodri          #+#    #+#             */
/*   Updated: 2024/01/20 20:54:47 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	digit_counter(int n)
{
	int	i;
	int	copy;

	i = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	copy = n;
	while (copy > 0)
	{
		copy = copy / 10;
		i++;
	}
	return (i);
}

int	exp_counter(int n)
{
	int	exp;
	int	digits;

	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (1000000000);
	digits = digit_counter(n);
	if (n < 0)
		digits--;
	exp = 1;
	while (--digits)
		exp = exp * 10;
	return (exp);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			exp;
	int			i;
	long int	copy;

	copy = (long int)n;
	exp = exp_counter(n);
	i = 0;
	str = malloc(digit_counter(n) + 1);
	if (!(str))
		return (NULL);
	if (n < 0)
	{
		str[i++] = '-';
		copy = -copy;
	}
	while (exp > 0)
	{
		str[i] = (copy / exp) + 48;
		copy = copy % exp;
		exp = exp / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* int main() {
    int number1 = 123;
    int number2 = -456;
    int number3 = 0;
    int number4 = -2147483648;

    char *result1 = ft_itoa(number1);
    char *result2 = ft_itoa(number2);
    char *result3 = ft_itoa(number3);
    char *result4 = ft_itoa(number4);

    if (result1) {
        printf("Resultado 1: %s\n", result1);
        free(result1);
    }
    if (result2) {
        printf("Resultado 2: %s\n", result2);
        free(result2);
    }
    if (result3) {
        printf("Resultado 3: %s\n", result3);
        free(result3);
    }
    if (result4) {
        printf("Resultado 4: %s\n", result4);
        free(result4);
    }
    return 0;
} */
