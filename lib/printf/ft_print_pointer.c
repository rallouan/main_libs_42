/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 11:14:47 by rallouan          #+#    #+#             */
/*   Updated: 2023/08/23 14:20:55 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_hex_2(unsigned long n, int *count)
{
	if (n >= 16)
	{
		ft_print_hex_2((n / 16), count);
		ft_print_hex_2((n % 16), count);
	}
	else if (n < 10)
		ft_print_char((n + '0'), count);
	else
		ft_print_char((n + 87), count);
}

void	ft_print_pointer(void *p, int *count)
{
	ft_print_str("0x", count);
	ft_print_hex_2((unsigned long)p, count);
}
