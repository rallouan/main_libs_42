/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:51:20 by rallouan          #+#    #+#             */
/*   Updated: 2023/04/26 18:35:59 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_bytes(int fd, char *full_read)
{
	char	*buffer;
	int		err;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	err = 1;
	while ((!gnl_strchr(full_read, '\n') && err != 0))
	{
		err = read(fd, buffer, BUFFER_SIZE);
		if (err == -1)
		{
			free(buffer);
			free(full_read);
			return (NULL);
		}
		buffer[err] = '\0';
		full_read = gnl_strjoin(full_read, buffer);
	}
	free(buffer);
	return (full_read);
}

char	*ft_get_line(char *full_read)
{
	char	*line;
	size_t	i;

	if (!*full_read)
		return (NULL);
	i = 0;
	while (full_read[i] && full_read[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (full_read[i] && full_read[i] != '\n')
	{
		line[i] = full_read[i];
		i++;
	}
	if (full_read[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*update_rest(char *full_read)
{
	char	*temp;
	int		n;
	int		i;

	n = 0;
	while (full_read[n] && full_read[n] != '\n')
		n++;
	if (!full_read[n])
	{
		free(full_read);
		return (NULL);
	}
	temp = malloc(sizeof(char) * (gnl_strlen(full_read) - n + 1));
	if (!temp)
		return (NULL);
	n++;
	i = 0;
	while (full_read[n])
		temp[i++] = full_read[n++];
	temp[i] = '\0';
	free(full_read);
	return (temp);
}

char	*get_next_line(int fd)
{
	static char	*full_read;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (0);
	full_read = read_bytes(fd, full_read);
	if (!full_read)
		return (NULL);
	line = ft_get_line(full_read);
	full_read = update_rest(full_read);
	return (line);
}
