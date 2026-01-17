/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:18:11 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/29 21:30:38 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_format(va_list args, char *str, size_t *counter)
{
	if (*str == 'c')
		ft_putchar_m(va_arg(args, int), counter);
	else if (*str == 's')
		ft_putstr_m(va_arg(args, char *), counter);
	else if (*str == 'p')
		ft_ptr(va_arg(args, void *), counter);
	else if (*str == 'i' || *str == 'd')
		ft_putnbr_m(va_arg(args, int), counter);
	else if (*str == 'u')
		ft_uns_putnbr(va_arg(args, unsigned int), counter);
	else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
			ft_puthexa(va_arg(args, unsigned int), counter, 0);
		else
			ft_puthexa(va_arg(args, unsigned int), counter, 1);
	}
	else if (*str == '%')
		ft_putchar_m(*str, counter);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	counter;

	if (!str)
		return (-1);
	counter = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format(args, (char *)str, &counter);
		}
		else
			ft_putchar_m(*str, &counter);
		str++;
	}
	va_end(args);
	return (counter);
}
/*
#include "ft_printf.h"

int	main(void)
{
	int	count;

	ft_printf("Caracter: %c\n", 'A');
	count = ft_printf("String: %s\n", "Arara azul");
	ft_printf("Ponteiro: %p\n", (void *)&count);
	ft_printf("Inteiro: %d\n", 42);
	ft_printf("Negativo: %i\n", -1234);
	ft_printf("Unsigned: %u\n", 3000000000);
	ft_printf("Hexa minúsculo: %x\n", 255);
	ft_printf("Hexa maiúsculo: %X\n", 255);
	ft_printf("Porcentagem: %%\n");
	ft_printf("Total de caracteres impressos: %d\n", count);
	return (0);
}
*/
