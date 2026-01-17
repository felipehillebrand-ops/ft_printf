/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:57:47 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/29 21:04:24 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uns_putnbr(unsigned int n, size_t *counter)
{
	char	digit_char;

	if (!counter)
		return (0);
	if (n > 9)
		ft_uns_putnbr(n / 10, counter);
	digit_char = (n % 10) + '0';
	ft_putchar_m(digit_char, counter);
	return ((int)*counter);
}
/*
int     main(void)
{
        size_t  count;

        count = 0;
        ft_uns_putnbr(42, &count);
        ft_putchar_m('\n', &count);
	ft_printf("%u\n", 42);
        ft_uns_putnbr(2147483647, &count);
        ft_putchar_m('\n', &count);
	ft_printf("%u\n", 2147483647);
        ft_uns_putnbr(1234, &count);
        ft_putchar_m('\n', &count);
	ft_printf("%u\n", 1234);
        ft_uns_putnbr(0, &count);
        ft_putchar_m('\n', &count);
	ft_printf("%u\n", 0);
        return (0);
}
*/
