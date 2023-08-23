/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:14:05 by rallouan          #+#    #+#             */
/*   Updated: 2023/08/23 14:20:55 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(unsigned int n, int *count)
{
	if (n >= 16)
	{
		ft_print_hex((n / 16), count);
		ft_print_hex((n % 16), count);
	}
	else if (n < 10)
		ft_print_char((n + '0'), count);
	else
		ft_print_char((n + 87), count);
}
