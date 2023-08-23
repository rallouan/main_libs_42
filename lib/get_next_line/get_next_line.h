/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:35:29 by rallouan          #+#    #+#             */
/*   Updated: 2023/08/13 20:41:55 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*gnl_strchr(const char *str, int c);
char	*gnl_strjoin(char *s1, char const *s2);
size_t	gnl_strlen(const char *str);
char	*read_bytes(int fd, char *full_read);
char	*ft_get_line(char *full_read);
char	*update_rest(char *full_read);
char	*gnl_strdup(const char *src);
#endif