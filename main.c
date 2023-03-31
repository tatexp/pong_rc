#include <stdio.h>

#include "controls.h"
#include "draw.h"
#include "errors.h"
#include "mlx.h"
#include "structure.h"
#include "utils.h"



int init(t_pong *_pong)
{
	_pong->screen.h = 600;
	_pong->screen.w = 900;
	_pong->obj_size = _pong->screen.h < _pong->screen.w ? _pong->screen.h : _pong->screen.w;
	_pong->obj_size /= 100;
	_pong->ball.x = 300;
	_pong->ball.y = 300;
	_pong->ball.speed = 3;
	_pong->players.h_left_player = _pong->screen.h / 10;
	_pong->players.h_right_player = _pong->players.h_left_player;
	_pong->players.y_pos_left_player = (_pong->screen.h - _pong->players.h_left_player) / 2;
	_pong->players.y_pos_right_player = _pong->players.y_pos_left_player;
	_pong->players.color_left_player = 0x00FFFF00;
	_pong->players.color_right_player = 0x0000FFFF;

	if ((void *)0 == (_pong->mlx = mlx_init() ))
		return (error_message_print("Failed on init mlx"));
	if ((void *)0 == (_pong->mlx_win = mlx_new_window(_pong->mlx, _pong->screen.w, _pong->screen.h, "Pong by aezzara") ))
		return (error_message_print("Failed on init mlx window"));
	if ((void *)0 == (_pong->img.img = mlx_new_image(_pong->mlx, _pong->screen.w, _pong->screen.h)))
		return (error_message_print("Failed on init mlx image"));
	_pong->img.addr = mlx_get_data_addr(_pong->img.img, &_pong->img.bits_per_pixel, &_pong->img.line_length,
								&_pong->img.endian);
	return (0);
}

int main(int ac, char** av)
{
	(void)ac;
	(void)av;
	t_pong	_pong;
	


	printf("start to develop pong\n");

	if (init(&_pong))
		return (1);

	printf("w = %d, h = %d\n", _pong.screen.w, _pong.screen.h);

	draw_border(&_pong);
	//loop
	mlx_loop_hook(_pong.mlx, draw_scene, &_pong);
	mlx_hook(_pong.mlx_win, 2, 0L, key_press, &_pong);
	mlx_loop(_pong.mlx);
	
	return (error_message_print("No game!"));

	return (0);
}