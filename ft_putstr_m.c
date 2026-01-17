/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_m.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:02:47 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/29 20:15:03 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_m(char *str, size_t *counter)
{
	size_t	i;

	if (!str)
		str = "(null)";
	i = 0;
	while (str[i])
	{
		ft_putchar_m(str[i], counter);
		i++;
	}
}
/*
int	main(void)
{
	size_t count;

	count = 0;
	ft_putstr_m("Arara azul\n", &count);
	ft_printf("%s\n", "Arara azul");
        return (0);
}
*/
