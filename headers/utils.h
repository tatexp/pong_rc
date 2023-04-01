#ifndef UTILS_H
# define UTILS_H

#include <stdlib.h>
#include <sys/time.h>
#include <math.h>
#include <stdio.h>
#include "mlx.h"
#include "structure.h"

void		close_win(t_pong *_pong);
long 		get_time();
void		fps_calc(t_pong *_pong);

#endif
