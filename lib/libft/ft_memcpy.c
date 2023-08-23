/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:56:04 by rallouan          #+#    #+#             */
/*   Updated: 2023/04/10 11:25:37 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*from;
	char	*to;
	size_t	i;

	from = (char *) src;
	to = (char *) dest;
	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		to[i] = from[i];
		i++;
	}
	return (to);
}
