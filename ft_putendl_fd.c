#include "libft.h"

void	ft_putend_fd(char *s, int fd)
{
	size_t len;

	len = ft_strlen(s);
	write(fd, s, sizeof(char) * len);
	write(fd,"\n", sizeof(char));
}