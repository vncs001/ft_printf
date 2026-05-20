/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 13:41:35 by vaugusto          #+#    #+#             */
/*   Updated: 2026/05/20 17:24:50 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
void	ft_print_c(char c);
void	ft_print_s(char *s);
void	ft_print_d(int n);

#endif