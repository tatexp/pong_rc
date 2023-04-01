#include "draw.h"
#include <stdio.h>


int		draw_scene(t_pong *_pong)
{
	fps_calc(_pong);
	draw_border(_pong); //tmp
	//erase background
	scene_to_backgroud_color(_pong);
	print_circle(_pong);
	draw_players(_pong);
	mlx_put_image_to_window(_pong->mlx, _pong->mlx_win, _pong->img.img, 0, 0);
	return (0);
}