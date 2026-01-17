/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 21:05:52 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/29 21:25:19 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	size_t	count;
	char	c;
	int	number;
	void	*ptr;

//ft_putchar_m
	ft_printf("\n---- Ft_putchar_m tests ----\n");
	count = 0;
	c = 'a';
	ft_putchar_m(c, &count);
	ft_printf("\n%c\n", 'a');
//ft_putstr_m
	ft_printf("\n---- Ft_putstr_m tests ----\n");
	count = 0;
	ft_putstr_m("Arara azul\n", &count);
	ft_printf("%s\n", "Arara azul");
//ft_putnbr_m
	ft_printf("\n---- Ft_putnbr_m tests ----\n");
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
//ft_uns_putnbr
	ft_printf("\n---- Ft_uns_putnbr tests ----\n");
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
//ft_ptr
	ft_printf("\n---- Ft_ptr tests ----\n");
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
//ft_puthexa
	ft_printf("\n---- Ft_puthexa tests ----\n");
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
//ft_printf
	ft_printf("\n---- Ft_printf tests ----\n");
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
}
