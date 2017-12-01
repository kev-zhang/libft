/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:24:17 by pzhang            #+#    #+#             */
/*   Updated: 2017/11/28 16:53:20 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*temp;
	size_t	c;

	c = 0;
	temp = (void*)malloc(size * sizeof(*temp));
	if (temp)
	{
		while (c < size)
		{
			((char*)temp)[c] = 0;
			c++;
		}
		return (temp);
	}
	return (NULL);
}
