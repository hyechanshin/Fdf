/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 13:26:30 by hyshin            #+#    #+#             */
/*   Updated: 2019/10/29 17:02:38 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1)
	{
		if (!s2)
			return ((char *)s1);
		while (s1[i] != '\0' && i < n)
		{
			j = 0;
			while (s1[i + j] && (i + j) < n && s1[i + j] == s2[j])
				j++;
			if (s2[j] == '\0')
				return ((char *)&s1[i]);
			i++;
		}
	}
	return (NULL);
}
