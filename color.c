/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 18:50:05 by hyshin            #+#    #+#             */
/*   Updated: 2020/08/21 18:50:05 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	fruit_color(t_fdf *data, int x, int y)
{
	int	z;

	z = data->map[y][x];
	if (z * data->altitude < 0)
		data->color = 0x009292;
	else
		data->color = 0xF65156;
}

void	trendy_color(t_fdf *data, int x, int y)
{
	int	z;

	z = data->map[y][x];
	if (z * data->altitude < 0)
		data->color = 0xCC1A99;
	else
		data->color = 0x6FFF5E;
}

void	color(t_fdf *data, int x, int y)
{
	if (data->palette == FRUIT)
		fruit_color(data, x, y);
	else if (data->palette == TRENDY)
		trendy_color(data, x, y);
}
