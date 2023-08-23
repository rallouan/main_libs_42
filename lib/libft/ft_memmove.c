/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:38:22 by rallouan          #+#    #+#             */
/*   Updated: 2023/04/10 11:18:12 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*from;
	char	*to;
	size_t	i;

	i = -1;
	from = (char *)src;
	to = (char *)dest;
	if (!src && !dest)
		return (NULL);
	if (from < to)
	{
		len--;
		while ((int)len >= 0)
		{
			*(to + len) = *(from + len);
			len--;
		}
	}
	else
		while (++i < len)
			*(to + i) = *(from + i);
	return (dest);
}
