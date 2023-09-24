#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	dstsize;
	char			*dst;
	char			*dst_og;
	size_t			setlen;
	unsigned int	i;

	dstsize = 0;
	i = 0;
	setlen = ft_strlen(set);
	while (i < setlen)
	{
		if (ft_strchr(s1, set[i]) == 0)
		{
			dstsize++;
		}
		i++;
	}
	dstsize++;
	dst = malloc(dstsize);
	if (dst != NULL)
	{
		dst_og = dst;
		while(*s1 != '\0')
		{
			if (ft_strchr(set, *s1) == 0)
			{
				*dst = *s1;
				dst++;
			}
			s1++;
		}
		*dst = '\0';
		dst = dst_og;
	}
	return (dst);
}

#include <stdio.h>

int main(void)
{
	char *s = "Hola";
	char *set = "ola";
	char *dst = ft_strtrim(s, set);
	printf("%s\n", dst);
	free(dst);
}