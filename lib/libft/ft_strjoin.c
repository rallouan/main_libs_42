/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:12:10 by rallouan          #+#    #+#             */
/*   Updated: 2023/04/10 11:58:28 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*join;

	join = malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!join)
		return (0);
	i = 0;
	j = 0;
	while (s1[j] != '\0')
		join[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		join[i++] = s2[j++];
	join [i] = '\0';
	return (join);
}
