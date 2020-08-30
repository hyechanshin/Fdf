/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words_counter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 07:33:50 by hyshin            #+#    #+#             */
/*   Updated: 2020/08/30 07:33:53 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_words_counter(char *str)
{
	unsigned int	count;
	unsigned int	i;

	if (!str)
		return (0);
	count = 0;
	i = 0;
	if (ft_iswspace(str[i]) != 1)
	{
		count++;
		i++;
	}
	while (str[i] != '\0')
	{
		if (ft_iswspace(str[i]) != 1 && ft_iswspace(str[i - 1]) == 1)
			count++;
		i++;
	}
	return (count);
}
