#include "fdf.h"

void	isometric(int *x, int *y, int z)
{
	int	previous_x;
	int previous_y;

	previous_x = *x;
	previous_y = *y;
	*x = (previous_x - previous_y) * cos(0.523599);
	*y = -z + (previous_x + previous_y) * sin(0.523599);
}

void	projection(t_draw *info)
{
	isometric(&info->x, &info->y, info->z);
	isometric(&info->x2, &info->y2, info->z2);
}
