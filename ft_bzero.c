/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteizag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:41:32 by esteizag          #+#    #+#             */
/*   Updated: 2023/09/14 12:41:34 by esteizag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_bzero(void *ptr, size_t n)
{	
	unsigned char	*p;

	if (ptr == 0)
	{
		return (ptr);
	}
	p = (unsigned char *) ptr;
	while (n > 0)
	{
		*p = 0;
		n--;
		p++;
	}
	return (ptr);
}
