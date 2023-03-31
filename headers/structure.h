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
}				t_screen;

typedef struct s_colors
{
	int t;
	int	r;
	int	g;
	int b;
}				t_colors;

typedef struct s_player
{
	double	x;
	double	y;
	double	dir;	//direction
	int		r;		//radius
	int		speed;
}				t_player;


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
	char		**map;
	t_screen	screen;
	t_player	player;
	void		*mlx;
	void		*mlx_win;
	t_img		img;
}				t_pong;

#endif
