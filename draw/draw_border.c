#include "draw.h"

void	draw_border(t_pong *_pong)
{
	const int	color = 0x00FF0000; //while color
	const int	w = _pong->screen.w;
	const int	h = _pong->screen.h;
	const int	dist = _pong->player.r;
	int 		x = 0;
	int 		y;

	while (x < w)
	{
		y = 0;
		while (y < h)
		{
			if (x < dist || x > w - dist || y < dist || y > h - dist)
				my_mlx_pixel_put(&_pong->img, x, y, color);
			++y;
		}
		++x;
	}
}
