/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteizag <esteizag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:48:00 by esteizag          #+#    #+#             */
/*   Updated: 2023/11/15 13:48:01 by esteizag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*allocate_memory(char const *s, size_t len)
{
	if (ft_strlen(s) < len)
	{
		return (malloc(sizeof(char) * (ft_strlen(s) + 1)));
	}
	else
	{
		return (malloc(sizeof(char) * (len + 1)));
	}
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (start > ft_strlen(s))
	{
		return (NULL);
	}
	while (start--)
	{
		s++;
	}
	substr = allocate_memory(s, len);
	if (substr != NULL)
	{	
		ft_strlcpy(substr, s, len + 1);
	}
	return (substr);
}

/* #include <stdio.h>

int main()
{
    char *s = "Hello, World!";
    char *substr;

    // Test case 1: Normal case
    substr = ft_substr(s, 7, 5);
    printf("Test case 1: %s\n", substr);
    free(substr);

    // Test case 2: `start` is 0
    substr = ft_substr(s, 0, 5);
    printf("Test case 2: %s\n", substr);
    free(substr);

    // Test case 3: `len` is 0
    substr = ft_substr(s, 7, 0);
    printf("Test case 3: %s\n", substr);
    free(substr);

    // Test case 4: `start` is equal to the length of the string
    substr = ft_substr(s, ft_strlen(s), 5);
    printf("Test case 4: %s\n", substr);
    free(substr);

    // Test case 5: `start` is greater than the length of the string
    substr = ft_substr(s, ft_strlen(s) + 1, 5);
    printf("Test case 5: %s\n", substr);
    free(substr);

    return 0;
} */
