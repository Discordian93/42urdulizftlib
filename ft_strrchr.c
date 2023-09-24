/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteizag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:59:07 by esteizag          #+#    #+#             */
/*   Updated: 2023/09/15 15:59:10 by esteizag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *s, char c)
{
	int		found;
	char	*target;

	found = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			found = 1;
			target = s;
		}
		s++;
	}
	if (found)
	{
		return (target);
	}
	return (0);
}
