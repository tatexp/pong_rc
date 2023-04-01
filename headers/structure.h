#ifndef STRUCTURE_H
# define STRUCTURE_H
# include <math.h>

// typedef struct		s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;

//screen resolution
typedef struct s_screen
{
	int	w;
	int	h;
	int	border_color;
}				t_screen;

typedef struct s_colors
{
	int t;
	int	r;
	int	g;
	int b;
}				t_colors;

typedef struct s_ball
{
	double	x;
	double	y;
	double	dir;	//direction
	//int		r;		//radius
	int		speed;
}				t_ball;

typedef struct s_players
{
	double	y_pos_left_player;
	int		h_left_player;
	int		color_left_player;

	double	y_pos_right_player;
	int		h_right_player;
	int		color_right_player;

	int		speed;
}				t_players;

typedef struct	s_img {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_img;

//main structure for all variables
typedef struct s_pong
{
	char			**map;
	t_screen		screen;
	t_players		players;
	t_ball			ball;
	void			*mlx;
	void			*mlx_win;
	t_img			img;
	int				obj_size;
	int				fps;
	long			time;
}					t_pong;

#endif
