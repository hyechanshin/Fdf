/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:00:58 by hyshin            #+#    #+#             */
/*   Updated: 2019/10/29 15:58:18 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;

	if (!(dup = (char *)malloc(ft_strlen(src) + 1)))
		return (NULL);
	return (ft_strcpy(dup, src));
}
