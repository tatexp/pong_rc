#include "utils.h"

int	create_trgb(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}

int		border_color_from_fps(int fps)
{
	int r;
	int g;

	fps *= 4;
	r = 255;
	g = fps;
	if (g > 255)
	{
		r = 255 - (g - 255);
		g = 255;
	}
	if (r < 0)
		r = 0;
	return ( create_trgb(0, r, g, 0));
}

void		fps_calc(t_pong *_pong)
{
	long	old_time;
	double	frame_time;
	int		fps;

	if (_pong->time == 0)
		_pong->time = get_time();
	else
	{
		old_time = _pong->time;
		_pong->time = get_time();
		frame_time = (_pong->time - old_time) / 1000.0;
		// printf("_pong->time = %li, frame_time = %f\n", _pong->time, frame_time);
		fps = (int)(1.0 / frame_time);
		_pong->screen.border_color = border_color_from_fps(fps);
		
	}
}
