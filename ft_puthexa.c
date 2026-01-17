/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:14:11 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/29 21:02:44 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int n, size_t *counter, int ucase)
{
	unsigned int	digit;
	char			c;

	if (n == 0)
	{
		write(1, "0", 1);
		(*counter)++;
		return ((int)(*counter));
	}
	if (n >= 16)
		ft_puthexa(n / 16, counter, ucase);
	digit = n % 16;
	if (digit < 10)
		c = digit + '0';
	else
	{
		if (ucase == 0)
			c = 'a' + (digit - 10);
		else
			c = 'A' + (digit - 10);
	}
	write(1, &c, 1);
	(*counter)++;
	return ((int)(*counter));
}
/*
#include <stdio.h>

int	main(void)
{
	size_t	count;

    // Teste 1: número pequeno
	count = 0;
	printf("Valor: 10 -> Saída esperada: a -> Saída real: ");
	fflush(stdout);
	ft_puthexa(10, &count, 0);
	printf("  (chars: %zu)\n", count);
	ft_printf("%x\n", 10);

    // Teste 2: número médio
	count = 0;
	printf("Valor: 255 -> Saída esperada: FF -> Saída real: ");
	fflush(stdout);
	ft_puthexa(255, &count, 1);
	printf("  (chars: %zu)\n", count);
	ft_printf("%X\n", 255);

    // Teste 3: número grande
	count = 0;
	printf("Valor: 305441741 -> Saída esperada: 1234abcd -> Saída real: ");
	fflush(stdout);
	ft_puthexa(0x1234ABCD, &count, 0);
	printf("  (chars: %zu)\n", count);
	ft_printf("%x\n", 305441741);

    // Teste 4: maiúsculas
	count = 0;
	printf("Valor: 305441741 -> Saída esperada: 1234ABCD -> Saída real: ");
	fflush(stdout);
	ft_puthexa(0x1234ABCD, &count, 1);
	printf("  (chars: %zu)\n", count);
	ft_printf("%X\n", 305441741);

    // Teste 5: zero
	count = 0;
	printf("Valor: 0 -> Saída esperada: 0 -> Saída real: ");
	fflush(stdout);
	ft_puthexa(0, &count, 0);
	printf("  (chars: %zu)\n", count);
	ft_printf("%x\n", 0);
	ft_printf("%X\n", 0);
	return (0);
}
*/
