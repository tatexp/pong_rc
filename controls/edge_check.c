#include "controls.h"

int	edge_check(t_pong *_pong, double y)
{
	const double	h = (double)_pong->screen.h;
	const double	size = (double)_pong->obj_size;

	return ( y < size || y > (h - size) );
}