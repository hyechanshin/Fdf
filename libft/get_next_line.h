/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:53:30 by hyshin            #+#    #+#             */
/*   Updated: 2019/12/04 16:03:29 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1024

# include "fcntl.h"
# include "unistd.h"
# include "stdlib.h"
# include "libft.h"

int		get_next_line(const int fd, char **line);

#endif
