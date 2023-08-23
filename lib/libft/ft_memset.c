/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:16:42 by rallouan          #+#    #+#             */
/*   Updated: 2023/04/10 11:18:36 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int c, size_t s)
{
	char	*str;

	str = p;
	while (s != 0)
	{
		*str++ = (unsigned char) c;
		s--;
	}
	return (p);
}
