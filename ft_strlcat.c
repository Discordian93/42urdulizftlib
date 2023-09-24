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

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	int		appendsize;
	size_t		returnvalue;
	char	*appendpos;

	appendsize = dstsize - ft_strlen(dst) - 1;
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
