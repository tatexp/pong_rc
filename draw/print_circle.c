#include "draw.h"

void print_circle(t_pong *_pong)
{
	const int	color = 0x00FFFFFF; //while color
	const int	r = _pong->player.r;
	const int	px = _pong->player.x; //player's x-position
	const int	py = _pong->player.y;	//player's y-position
	int 		ix = px - r;	//counter for x starts with player's x-position minus raduis
	int 		iy;

	while (ix < px + r)
	{
		iy = py - r;
		while (iy < py + r)
		{
			//circle formula is "a^2 + b^2 = r^2"
			// to draw unfilled circle we must change '<' sigh to '='
			if ((ix - px) * (ix - px) + (iy - py) * (iy - py) < r * r)
				my_mlx_pixel_put(&_pong->img, ix, iy, color);
			iy++;
		}
		ix++;
	}
	mlx_put_image_to_window(_pong->mlx, _pong->mlx_win, _pong->img.img, 0, 0);
}
