/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:58:05 by hyshin            #+#    #+#             */
/*   Updated: 2020/08/21 18:45:42 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	res = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (res == NULL)
	{
		return (NULL);
	}
	ft_strcpy(res, s1);
	ft_strcat(res, s2);
	return (res);
}
