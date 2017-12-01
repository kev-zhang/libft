/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:55:18 by pzhang            #+#    #+#             */
/*   Updated: 2017/11/28 16:59:46 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*temp;
	size_t	c;

	c = 0;
	temp = (char*)malloc((size + 1) * sizeof(char));
	if (temp)
	{
		while (c < size + 1)
		{
			temp[c] = '\0';
			c++;
		}
		return (temp);
	}
	return (NULL);
}
