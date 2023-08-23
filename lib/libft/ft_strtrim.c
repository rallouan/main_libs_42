/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:00:39 by rallouan          #+#    #+#             */
/*   Updated: 2023/04/10 11:24:23 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set_found(char const *set, char const c)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(set);
	while (i < len)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;

	start = 0;
	while (ft_set_found(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	if (!(start == end + 1))
		while (ft_set_found(set, s1[end]))
			end--;
	return (ft_substr(s1, start, end - start + 1));
}
