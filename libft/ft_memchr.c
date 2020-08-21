/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:50:50 by hyshin            #+#    #+#             */
/*   Updated: 2019/10/29 15:22:12 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	c2;
	int				i;

	i = 0;
	ptr = (unsigned char *)s;
	c2 = (unsigned char)c;
	while (n--)
	{
		if (ptr[i] == c2)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
