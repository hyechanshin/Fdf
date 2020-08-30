/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:50:11 by hyshin            #+#    #+#             */
/*   Updated: 2019/11/28 11:59:37 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*send_result(char *str, char **line)
{
	int		i;
	char	*delete;
	char	*nstr;
	char	**line2;

	i = 0;
	nstr = ft_strnew(0);
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	delete = nstr;
	nstr = ft_strsub(str, i + 1, ft_strlen(&str[i]));
	line2 = &(*line);
	*line2 = ft_strsub(str, 0, i);
	ft_strdel(&delete);
	ft_strdel(&str);
	return (nstr);
}

int		get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static char	*str[1024];
	int			redd;
	char		*nstr;

	if (fd < 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	if (str[fd] == NULL)
		str[fd] = ft_strnew(0);
	while (!ft_strchr(str[fd], '\n') && (redd = read(fd, buf, BUFF_SIZE)) > 0)
	{
		nstr = str[fd];
		buf[redd] = '\0';
		str[fd] = ft_strjoin(nstr, buf);
		ft_strdel(&nstr);
	}
	if (*str[fd] != '\0')
	{
		str[fd] = send_result(str[fd], line);
		return (1);
	}
	return (0);
}
