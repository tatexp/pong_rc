#include "draw.h"

void draw_players(t_pong *_pong)
{
	int	x;
	int y;

	//left player
	x = _pong->obj_size * 2; //border size + whitespace

	while (x < _pong->obj_size * 3)
	{
		y = _pong->players.y_pos_left_player;
		while (y < _pong->players.y_pos_left_player + _pong->players.h_left_player)
		{
			my_mlx_pixel_put(&_pong->img, x, y, _pong->players.color_left_player);
			++y;
		}
		++x;
	}

	//right player
	x = _pong->screen.w - _pong->obj_size * 3; //border size + whitespace + player's width
	while (x < _pong->screen.w - _pong->obj_size * 2)
	{
		y = _pong->players.y_pos_right_player;
		while (y < _pong->players.y_pos_right_player + _pong->players.h_right_player)
		{
			my_mlx_pixel_put(&_pong->img, x, y, _pong->players.color_right_player);
			++y;
		}
		++x;
	}
}
