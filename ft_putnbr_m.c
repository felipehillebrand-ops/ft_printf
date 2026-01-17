/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_m.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 14:43:19 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/29 20:27:37 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_m(int nb, size_t *counter)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar_m('-', counter);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_m((int)(n / 10), counter);
	ft_putchar_m((n % 10) + '0', counter);
}
/*
int	main(void)
{
	size_t	count;

	count = 0;
	ft_putnbr_m(42, &count);
	ft_putchar_m('\n', &count);
	ft_printf("%d\n", 42);
        ft_printf("%i\n", 42);
	ft_putnbr_m(-2147483648, &count);
	ft_putchar_m('\n', &count);
	ft_printf("%d\n", -2147483648);
        ft_printf("%i\n", -2147483648);
	ft_putnbr_m(-1234, &count);
	ft_putchar_m('\n', &count);
	ft_printf("%d\n", -1234);
        ft_printf("%i\n", -1234);
	ft_putnbr_m(0, &count);
	ft_putchar_m('\n', &count);
	ft_printf("%d\n", 0);
        ft_printf("%i\n", 0);
	return (0);
}
*/
