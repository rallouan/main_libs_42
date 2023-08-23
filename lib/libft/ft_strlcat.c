/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:35:43 by rallouan          #+#    #+#             */
/*   Updated: 2023/04/10 11:21:08 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d_len;
	size_t	i;
	size_t	j;

	d_len = ft_strlen(dest);
	i = 0;
	j = d_len;
	if (d_len < size - 1 && size > 0)
	{
		while (src[i] && d_len + i < size - 1)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = 0;
	}
	if (d_len >= size)
		d_len = size;
	return (d_len + ft_strlen(src));
}
