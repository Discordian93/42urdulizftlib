#include <stdlib.h>
#include "libft.h"

static char *allocate_memory(char const *s, size_t len)
{
    if (ft_strlen(s) < len)
    {
        return malloc(sizeof(char)*(ft_strlen(s) + 1));
    }
    else
    {
        return malloc(sizeof(char)*(len + 1));
    }
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;

	if(start > ft_strlen(s))
	{
		return (NULL);
	}
	while (start--)
	{
		s++;
	}
	substr = allocate_memory(s, len);
	if(substr != NULL)
	{	
		ft_strlcpy(substr, s, len + 1);
	}
	return (substr);
}

/* 
#include <stdio.h>
int main(void)
{
	char *test = "Hola mundo cruel";
	char *sub = ft_substr(test, 5, 5);
	printf("%s\n", sub);
	free(sub);
} */