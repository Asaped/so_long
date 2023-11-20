/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moturki <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:17:58 by moturki           #+#    #+#             */
/*   Updated: 2023/11/20 21:28:03 by moturki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	ft_strlen2(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (i);
	while (str[i])
		i++;
	return (i);
}

static char	*ft_strjoin2(char *s1, char s2)
{
	int		len;
	int		i;
	char	*str;

	len = ft_strlen2(s1);
	str = malloc(sizeof(char) * (len + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[i++] = s2;
	str[i] = 0;
	if (s1)
		free(s1);
	return (str);
}

static int	init_info(t_list5 *info, int fd)
{
	info->curlen = 0;
	info->fd = fd;
	info->size = read(info->fd, info->buffer, 1);
	if (info->size < 1)
		return (0);
	return (1);
}

static char	set_char(t_list5 *info)
{
	char	c;

	if (info->curlen >= info->size)
	{
		info->curlen = 0;
		info->size = read(info->fd, info->buffer, 1);
		if (info->size < 1)
			return (0);
	}
	c = info->buffer[info->curlen++];
	return (c);
}

char	*get_next_line(int fd)
{
	static t_list5	info = {.fd = -1};
	char			*str;
	char			c;

	str = NULL;
	if (info.fd != fd)
		if (!init_info(&info, fd))
			return (NULL);
	c = set_char(&info);
	while (c)
	{
		str = ft_strjoin2(str, c);
		if (c == '\n')
			return (str);
		c = set_char(&info);
	}
	return (str);
}
