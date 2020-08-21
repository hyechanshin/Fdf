/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:40:34 by hyshin            #+#    #+#             */
/*   Updated: 2019/11/13 11:43:32 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int nbr;
	int sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while (ft_iswspace(str[i]))
		str++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		nbr = nbr * 10 + str[i] - '0';
		str++;
	}
	return (nbr * sign);
}
