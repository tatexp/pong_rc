#include "utils.h"

void		close_win(t_pong *_pong)
{
	mlx_destroy_image(_pong->mlx, _pong->img.img);
	mlx_clear_window(_pong->mlx, _pong->mlx_win);
	mlx_destroy_window(_pong->mlx, _pong->mlx_win);

	exit(0);
}
