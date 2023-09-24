/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteizag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:34:49 by esteizag          #+#    #+#             */
/*   Updated: 2023/09/13 18:34:51 by esteizag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{	
	size_t	count;

	if (str == 0)
	{
		return (0);
	}
	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
