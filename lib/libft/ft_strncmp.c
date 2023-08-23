/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 16:10:40 by rallouan          #+#    #+#             */
/*   Updated: 2023/04/10 11:22:25 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		sim;

	i = 0;
	sim = 0;
	while (s1[i] != '\0' && i < n)
	{
		sim = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (sim != 0)
			return (sim);
		else
			i++;
	}
	if (s2[i] != '\0' && i < n)
		sim = - (unsigned char)s2[i];
	return (sim);
}
