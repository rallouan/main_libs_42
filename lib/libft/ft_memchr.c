/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:28:05 by rallouan          #+#    #+#             */
/*   Updated: 2023/04/10 11:16:32 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*s;

	c = (char) c;
	s = (char *) str;
	while (n > 0)
	{
		if (*s == c)
		{
			return (s);
		}
		n--;
		s++;
	}
	return (0);
}
