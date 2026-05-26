/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 13:49:24 by vaugusto          #+#    #+#             */
/*   Updated: 2026/05/26 17:56:41 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//TASKS (cada uma feita retire a linha de comentario)
// - Completar funcao principal com va_list
// - Completar funcao %p
int	funnel(char identifier, va_list args)
{
	if (identifier == 'c')
		return (ft_print_c(va_arg(args, int)));
	else if (identifier == 's')
		return (ft_print_s(va_arg(args, char *)));
	else if (identifier == 'd')
		return (ft_print_i(va_arg(args, int)));
	else if (identifier == 'i')
		return (ft_print_i(va_arg(args, int)));
	else if (identifier == 'u')
		return (ft_print_ud(va_arg(args, unsigned int)));
	else if (identifier == 'x' || identifier == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), identifier));
	else if (identifier == '%')
		return (ft_print_c('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		total;
	int		i;

	total = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			total += funnel(format[++i], args);
		else
			total += ft_print_c(format[i]);
		i++;
	}
	va_end(args);
	return (total);
}
