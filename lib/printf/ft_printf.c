/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:04:22 by rallouan          #+#    #+#             */
/*   Updated: 2023/08/23 14:20:55 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

static void	ft_check_format(va_list ap, const char *format,
							int *count, size_t *i)
{
	if (format[*i] == '%')
		ft_print_char(format[*i], count);
	else if (format[*i] == 'c')
		ft_print_char(va_arg(ap, int), count);
	else if (format[*i] == 's')
		ft_print_str(va_arg(ap, char *), count);
	else if (format[*i] == 'p')
		ft_print_pointer(va_arg(ap, void *), count);
	else if (format[*i] == 'd' || format[*i] == 'i')
		ft_print_nbr(va_arg(ap, int), count);
	else if (format[*i] == 'u')
		ft_print_unbr(va_arg(ap, unsigned int), count);
	else if (format[*i] == 'x')
		ft_print_hex(va_arg(ap, unsigned long), count);
	else if (format[*i] == 'X')
		ft_print_upperhex(va_arg(ap, unsigned long), count);
	(*i)++;
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	size_t	i;
	int		count;
	size_t	n;

	va_start(ap, format);
	i = 0;
	count = 0;
	n = ft_strlen(format);
	if (format == NULL)
		return (0);
	while (format[i] && (i < n))
	{
		if (format[i] != '%')
			ft_print_char(format[i++], &count);
		else
		{
			i++;
			ft_check_format(ap, format, &count, &i);
		}
	}
	va_end(ap);
	return (count);
}
