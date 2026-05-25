/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 13:23:29 by vaugusto          #+#    #+#             */
/*   Updated: 2026/05/25 14:21:59 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static long	ft_nbrlen(long n)
{
	long	len;

	len = (n <= 0);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*ft_long_itoa(long n)
{
	char		*str;
	long		nb;
	long		len;

	len = ft_nbrlen(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	nb = n;
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

void	ft_print_d(long n)
{
	char	*n_ptr;

	n_ptr = ft_long_itoa(n);
	ft_print_s(n_ptr);
}

// int	main(void)
// {
// 	ft_print_d(42);
// }