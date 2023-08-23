/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:37:06 by rallouan          #+#    #+#             */
/*   Updated: 2023/04/10 11:27:41 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*p;

	p = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
			p = (char *)str;
		str++;
	}
	if (*str == (char)c)
		p = (char *)str;
	return (p);
}
