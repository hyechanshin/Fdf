/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:11:02 by hyshin            #+#    #+#             */
/*   Updated: 2019/10/29 15:14:16 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*pt_dst;
	unsigned char		*pt_src;

	pt_dst = (unsigned char*)dst;
	pt_src = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		pt_dst[i] = pt_src[i];
		if (pt_dst[i] == (unsigned char)c)
			return ((void*)(dst + i + 1));
		++i;
	}
	return (NULL);
}
