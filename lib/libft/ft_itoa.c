/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:21:13 by rallouan          #+#    #+#             */
/*   Updated: 2023/04/10 11:14:57 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_reverse(char *str)
{
	char	temp;
	int		len;
	int		start;
	int		end;

	len = ft_strlen(str);
	end = len - 1;
	start = 0;
	while (start < len / 2)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (!n)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len + 1);
}

static void	ft_check(int n, char *res, int neg, int i)
{
	if (n == 0)
		res[i++] = '0';
	if (neg)
		n = -n;
	while (n)
	{
		res[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (neg)
		res[i++] = '-';
	res[i] = '\0';
}

char	*ft_itoa(int n)
{
	int			i;
	int			neg;
	long int	x;
	char		*res;

	i = 0;
	neg = 0;
	x = n;
	if (x == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		neg = 1;
	res = (char *)ft_calloc((ft_intlen(n) + neg), sizeof(*res));
	if (!res)
		return (0);
	else
	{
		ft_check(n, res, neg, i);
		ft_reverse(res);
	}
	return (res);
}
