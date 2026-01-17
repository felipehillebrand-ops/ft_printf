/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:20:19 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/29 20:51:44 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_recursive(unsigned long n, size_t *counter)
{
	char	c;

	if (n >= 16)
		ft_recursive(n / 16, counter);
	if ((n % 16) < 10)
		c = (n % 16) + '0';
	else
		c = (n % 16) - 10 + 'a';
	ft_putchar_m(c, counter);
}

int	ft_ptr(void *ptr, size_t *counter)
{
	unsigned long	address;

	address = (unsigned long)ptr;
	if (address == 0)
	{
		write(1, "(nil)", 5);
		*counter += 5;
		return (*counter);
	}
	write(1, "0x", 2);
	*counter += 2;
	ft_recursive(address, counter);
	return ((int)*counter);
}
/*
#include <stdio.h>

int	main(void)
{
	size_t	count;
	int	number;
	void	*ptr;

	count = 0;
	number = 42;
	ptr = &number;
	write(1, "Endereço de ptr: ", 18);
	ft_ptr(ptr, &count);
	write(1, "\n", 1);
	ft_printf("%p\n", ptr);
	printf("Total de caracteres impressos: %zu\n", count);
	count = 0;
	write(1, "Endereço NULL: ", 16);
	ft_ptr(NULL, &count);
	write(1, "\n", 1);
	ft_printf("%p\n", NULL);
	printf("Total de caracteres impressos: %zu\n", count);
	return (0);
}
*/
