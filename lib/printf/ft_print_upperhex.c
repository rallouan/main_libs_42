/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_upperhex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:34:21 by rallouan          #+#    #+#             */
/*   Updated: 2023/08/23 14:20:55 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_upperhex(unsigned int n, int *count)
{
	if (n >= 16)
	{
		ft_print_upperhex((n / 16), count);
		ft_print_upperhex((n % 16), count);
	}
	else if (n < 10)
		ft_print_char((n + '0'), count);
	else
		ft_print_char((n + 55), count);
}
