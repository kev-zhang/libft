/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:59:06 by pzhang            #+#    #+#             */
/*   Updated: 2017/11/28 16:15:22 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	c;

	c = 0;
	while (c < n)
	{
		if (((unsigned char*)s1)[c] != ((unsigned char*)s2)[c])
			return (((unsigned char*)s1)[c] - ((unsigned char*)s2)[c]);
		c++;
	}
	return (0);
}
