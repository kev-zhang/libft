/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:39:30 by pzhang            #+#    #+#             */
/*   Updated: 2017/11/30 16:12:44 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int c;

	if (dest < src)
		ft_memcpy(dest, src, len);
	else
	{
		c = (int)len - 1;
		while (c >= 0)
		{
			((char*)dest)[c] = ((char*)src)[c];
			c--;
		}
	}
	return (dest);
}
