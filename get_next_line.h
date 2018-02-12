#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 42

# include "libft/includes/libft.h"
# include <fcntl.h>
# include <stdlib.h>

int		get_next_line(const int fd, char **line);

#endif
