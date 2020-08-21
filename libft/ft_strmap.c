/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:54:52 by hyshin            #+#    #+#             */
/*   Updated: 2019/10/29 11:55:18 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	size_t	i;
	char	*fresh;

	if (!s || !f)
		return (NULL);
	fresh = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i])
	{
		fresh[i] = (*f)(s[i]);
		i++;
	}
	return (fresh);
}
