/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 18:05:24 by pzhang            #+#    #+#             */
/*   Updated: 2017/11/30 20:37:27 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*temp;
	unsigned int	c;

	if (s)
	{
		temp = (char*)malloc(sizeof(char) * (len + 1));
		if (temp)
		{
			c = 0;
			while (c < (unsigned int)len)
			{
				temp[c] = s[start + c];
				c++;
			}
			temp[len] = '\0';
			return (temp);
		}
	}
	return (NULL);
}
