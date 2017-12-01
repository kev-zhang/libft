/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:15:54 by pzhang            #+#    #+#             */
/*   Updated: 2017/11/30 23:05:20 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	while (dest[d] && d < size)
		d++;
	if (size == d)
	{
		while (src[s] != '\0')
			s++;
		return (s + size);
	}
	while (src[s] != '\0')
	{
		if (d + s < size - 1)
			dest[d + s] = src[s];
		else
			break ;
		s++;
	}
	dest[d + s] = '\0';
	s = ft_strlen(src);
	return (s + d);
}
