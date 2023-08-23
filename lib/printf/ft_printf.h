/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:32:47 by rallouan          #+#    #+#             */
/*   Updated: 2023/08/23 13:03:50 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_print_char(int c, int *count);
void	ft_print_hex(unsigned int n, int *count);
void	ft_print_nbr(int n, int *count);
void	ft_print_pointer(void *p, int *count);
void	ft_print_str(char *s, int *count);
void	ft_print_unbr(unsigned int n, int *count);
void	ft_print_upperhex(unsigned int n, int *count);
int		ft_printf(const char *format, ...);

#endif
