/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteizag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:53:49 by esteizag          #+#    #+#             */
/*   Updated: 2023/09/15 14:53:51 by esteizag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		appendsize;
	size_t	returnvalue;
	char	*appendpos;

	appendsize = size - ft_strlen(dst) - 1;
	returnvalue = ft_strlen(dst) + ft_strlen(src);
	if (appendsize < 0)
	{
		return (returnvalue);
	}
	appendpos = dst + ft_strlen(dst);
	while (*src != '\0' && 0 < appendsize--)
	{
		*appendpos++ = *src++;
	}
	if (appendsize >= 0)
	{
		*appendpos = '\0';
	}
	return (returnvalue);
}

/* #include <stdio.h>

int main()
{
	char dst[50] = "Hello";
	const char *src = " World!";
	size_t size = sizeof(dst);

	printf("Before ft_strlcat: %s\n", dst);
	size_t ret = ft_strlcat(dst, src, size);
	printf("After ft_strlcat: %s\n", dst);
	printf("Returned value: %zu\n", ret);

	return 0;
}
 */