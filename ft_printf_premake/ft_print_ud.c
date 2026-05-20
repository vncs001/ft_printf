/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ud.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:07:58 by vaugusto          #+#    #+#             */
/*   Updated: 2026/05/20 18:26:20 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static unsigned int	ft_nbrlen(unsigned int n)
{
	unsigned int	len;

	len = (n <= 0);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*ft_uns_itoa(unsigned int n)
{
	char				*str;
	long				nb;
	unsigned int		len;

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

void	ft_print_ud(unsigned int n)
{
	char	*n_ptr;

	n_ptr = ft_uns_itoa(n);
	ft_print_s(n_ptr);
}

// int	main(void)
// {
// 	ft_print_ud(4294967274);
// }