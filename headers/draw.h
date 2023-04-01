#ifndef DRAW_H
# define DRAW_H

#include "mlx.h"
#include "structure.h"
#include "utils.h"

void	draw_border(t_pong *_pong);
int		draw_scene(t_pong *_pong);
void	draw_players(t_pong *_pong);
void	print_circle(t_pong *_pong);
void	my_mlx_pixel_put(t_img *img, int x, int y, int color);
void	scene_to_backgroud_color(t_pong *_pong);

#endif
