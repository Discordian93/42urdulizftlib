/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteizag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:34:46 by esteizag          #+#    #+#             */
/*   Updated: 2023/09/13 17:34:48 by esteizag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	int	isalpha;
	int	isdigit;

	isalpha = ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	isdigit = (c >= '0' && c <= '9');
	return (isalpha || isdigit);
}
