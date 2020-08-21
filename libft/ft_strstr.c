/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 13:09:32 by hyshin            #+#    #+#             */
/*   Updated: 2019/10/29 13:35:35 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*src;
	char	*find;
	size_t	size;

	src = (char *)s1;
	find = (char *)s2;
	size = ft_strlen(find);
	if (size == 0)
		return (src);
	while (*src)
	{
		if (ft_strncmp(src, find, size) == 0)
			return (src);
		src++;
	}
	return ((char *)NULL);
}
