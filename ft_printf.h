/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:55:45 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/29 17:51:20 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putchar_m(char c, size_t *counter);
void	ft_putstr_m(char *str, size_t *counter);
int		ft_ptr(void *ptr, size_t *counter);
void	ft_putnbr_m(int nb, size_t *counter);
int		ft_uns_putnbr(unsigned int n, size_t *counter);
int		ft_puthexa(unsigned int n, size_t *counter, int ucase);

#endif
