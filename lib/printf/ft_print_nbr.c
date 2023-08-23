/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:20:55 by rallouan          #+#    #+#             */
/*   Updated: 2023/08/23 14:20:55 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nbr(int n, int *count)
{
	if (n == -2147483648)
		ft_print_str("-2147483648", count);
	else
	{
		if (n < 0)
		{
			n = -n;
			ft_print_char('-', count);
		}
		if (n < 10)
			ft_print_char((n + '0'), count);
		else
		{
			ft_print_nbr((n / 10), count);
			ft_print_nbr((n % 10), count);
		}
	}
}
