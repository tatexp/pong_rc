#include "draw.h"

int		draw_scene(t_pong *_pong)
{
	//erase background
	scene_to_backgroud_color(_pong);
	print_circle(_pong);
	draw_players(_pong);
	mlx_put_image_to_window(_pong->mlx, _pong->mlx_win, _pong->img.img, 0, 0);
	return (0);
}