/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:13:09 by rallouan          #+#    #+#             */
/*   Updated: 2023/08/23 14:20:55 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unbr(unsigned int n, int *count)
{
	if (n < 10)
		ft_print_char((n + '0'), count);
	else
	{
		ft_print_nbr((n / 10), count);
		ft_print_nbr((n % 10), count);
	}
}
