/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteizag <esteizag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:42:10 by esteizag          #+#    #+#             */
/*   Updated: 2023/11/15 13:42:11 by esteizag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static unsigned int	calculate_dstsize(char const *s1, char const *set)
{
	unsigned int	dstsize;
	size_t			setlen;
	unsigned int	i;

	dstsize = 1;
	i = 0;
	setlen = ft_strlen(set);
	while (i < setlen)
	{
		if (ft_strchr(s1, set[i]) == NULL)
		{
			dstsize++;
		}
		i++;
	}
	return (dstsize);
}

static void	copy_chars(char const *s1, char const *set, char *dst)
{
	while (*s1 != '\0')
	{
		if (ft_strchr(set, *s1) == NULL)
		{
			*dst = *s1;
			dst++;
		}
		s1++;
	}
	*dst = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	dstsize;
	char			*dst;

	dstsize = calculate_dstsize(s1, set);
	dst = malloc(sizeof(char) * (dstsize + 1));
	if (dst != NULL)
	{
		copy_chars(s1, set, dst);
	}
	return (dst);
}

/* 
#include <stdio.h>

int main(void)
{
	char *s = "Hola";
	char *set = "oa";
	char *dst = ft_strtrim(s, set);
	printf("%s\n", dst);
	free(dst);
} */
