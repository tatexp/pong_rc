#include "draw.h"

void	draw_border(t_pong *_pong)
{
	const int	color = _pong->screen.border_color;
	const int	w = _pong->screen.w;
	const int	h = _pong->screen.h;
	const int	size = _pong->obj_size;
	int 		x = 0;
	int 		y;

	while (x < w)
	{
		y = 0;
		while (y < h)
		{
			if (x < size || x > w - size || y < size || y > h - size)
				my_mlx_pixel_put(&_pong->img, x, y, color);
			++y;
		}
		++x;
	}
}
