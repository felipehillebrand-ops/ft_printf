/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_m.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 22:45:15 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/29 20:17:58 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_m(char c, size_t *counter)
{
	write(1, &c, 1);
	(*counter)++;
}
/*
int	main(void)
{
	char	c;
	size_t	count;

	count = 0;
	c = 'a';
	ft_putchar_m(c, &count);
	ft_printf("\n%c\n", 'a');
}
*/
