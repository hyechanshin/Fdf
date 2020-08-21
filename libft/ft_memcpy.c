/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:38:36 by hyshin            #+#    #+#             */
/*   Updated: 2019/11/11 17:29:09 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	unsigned char		*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (!n || dst == src)
		return (dst);
	while (n--)
		*dest++ = *source++;
	return (dst);
}
