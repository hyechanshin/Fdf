/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:32:34 by hyshin            #+#    #+#             */
/*   Updated: 2019/10/29 11:34:14 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (((unsigned char*)s2)[i] && ((unsigned char*)s1)[i] && \
		((unsigned char*)s1)[i] == ((unsigned char*)s2)[i])
		i++;
	return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}
