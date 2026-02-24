/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevlim <kevlim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:26:05 by kevlim            #+#    #+#             */
/*   Updated: 2026/01/07 17:47:34 by kevlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_gnl(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

int	ft_isnewline(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == SEP)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup_gnl(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	if (!src)
		return (NULL);
	dup = malloc(ft_strlen_gnl(src) + 1);
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*r;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s2)
		return (s1);
	r = malloc(ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1);
	if (!r)
		return (free(s1), NULL);
	while (s1 && s1[i])
	{
		r[i] = s1[i];
		i++;
	}
	while (s2[j])
		r[i++] = s2[j++];
	r[i] = '\0';
	free(s1);
	return (r);
}

char	*ft_substr_gnl(char *s, int start, int len)
{
	char	*r;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	r = malloc(len + 1);
	if (!r)
		return (NULL);
	while (i < len && s[start + i])
	{
		r[i] = s[start + i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
