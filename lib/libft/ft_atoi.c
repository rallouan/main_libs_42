/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:43:39 by rallouan          #+#    #+#             */
/*   Updated: 2023/08/03 13:56:16 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// long int	ft_atoi(const char *str)
// {
// 	int			sign;
// 	long int	number;

// 	sign = 1;
// 	number = 0;
// 	if (!*str)
// 		return (0);
// 	while (*str == '\t' || *str == '\n' || *str == '\v'
// 		||*str == '\f' || *str == '\r' || *str == ' ')
// 			str++;
// 	if (*str == '-' || *str == '+')
// 	{
// 		if (*str == '-')
// 			sign *= -1;
// 		str++;
// 	}
// 	while (*str >= '0' && *str <= '9')
// 	{
// 		number *= 10;
// 		number += *str - '0';
// 		str++;
// 	}
// 	return (number * sign);
// }

long int	ft_atoi(const char *str)
{
	long int	nb;
	int			isneg;
	int			i;

	nb = 0;
	isneg = 1;
	i = 0;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		isneg *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * isneg);
}
