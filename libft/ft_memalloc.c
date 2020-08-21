/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:26:37 by hyshin            #+#    #+#             */
/*   Updated: 2019/10/29 15:08:04 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;
	char	*ptr;

	mem = (char *)malloc(size);
	if (mem == NULL)
		return (NULL);
	ptr = mem;
	while (size--)
		*ptr++ = 0;
	return (mem);
}
