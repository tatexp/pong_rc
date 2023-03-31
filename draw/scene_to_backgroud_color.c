#include "draw.h"

void	scene_to_backgroud_color(t_pong *_pong)
{
	//background color doesn't set 
	//then erase 

	const int	color = 0;
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
			if (x >= dist && x <= w - dist && y >= dist && y <= h - dist)
				my_mlx_pixel_put(&_pong->img, x, y, color);
			++y;
		}
		++x;
	}
}