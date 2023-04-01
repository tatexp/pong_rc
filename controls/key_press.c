#include "controls.h"

/*
** keycodes
** 123 - left key
** 124 - right key
** 125 - down key
** 126 - up key
** 0 - 'A' key
** 1 - 'S' key
** 2 - 'D' key
** 13 - 'W' key
** 53 - "Ecs" key
*/

int			key_press(int kc, t_pong *_pong)
{
	/*if (kc == 123 && v->key.left == 0)
		key_left_right(v, 1);
	if (kc == 0 && v->key.left_m == 0)
	{
		v->key.left_m = 1;
		v->key.right_m = 0;
	}
	if (kc == 124 && v->key.right == 0)
		key_left_right(v, -1);
	if (kc == 2 && v->key.right_m == 0)
	{
		v->key.right_m = 1;
		v->key.left_m = 0;
	}
	if ((kc == 125 || kc == 1) && v->key.down == 0)
		key_up_down(v, -1);
	if ((kc == 126 || kc == 13) && v->key.up == 0)
		key_up_down(v, 1);*/
	if ( kc == 53 )
		close_win(_pong);

	//'W' key => move left player up
	if ( kc == 13 && !edge_check(_pong, _pong->players.y_pos_left_player - _pong->players.speed) ) 
		_pong->players.y_pos_left_player -= _pong->players.speed;

	//'S' key => move left player down
	if (kc == 1 && !edge_check(_pong, _pong->players.y_pos_left_player + _pong->players.h_left_player + _pong->players.speed) ) 
		_pong->players.y_pos_left_player += _pong->players.speed;

	//up key => move right player up
	if ( kc == 126 && !edge_check(_pong, _pong->players.y_pos_right_player - _pong->players.speed) ) 
		_pong->players.y_pos_right_player -= _pong->players.speed;

	//down key => move right player down
	if (kc == 125 && !edge_check(_pong, _pong->players.y_pos_right_player + _pong->players.h_right_player + _pong->players.speed) ) 
		_pong->players.y_pos_right_player += _pong->players.speed;
	return (0);
}