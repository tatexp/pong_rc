#include "draw.h"

int		draw_scene(t_pong *_pong)
{
	//erase background
	scene_to_backgroud_color(_pong);
	print_circle(_pong);
	return (0);
}