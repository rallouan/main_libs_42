/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:07:46 by rallouan          #+#    #+#             */
/*   Updated: 2023/04/25 17:07:53 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	gnl_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*gnl_strchr(const char *str, int c)
{
	if (!str)
		return (0);
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}

char	*gnl_strjoin(char *s1, char const *s2)
{
	int		i;
	int		j;
	char	*join;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		*s1 = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	join = malloc(sizeof(*s1) * (gnl_strlen(s1) + gnl_strlen(s2) + 1));
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
	free(s1);
	return (join);
}

char	*gnl_strdup(const char *src)
{
	char	*s;
	int		i;

	s = malloc(gnl_strlen(src) + 1);
	if (!s)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
