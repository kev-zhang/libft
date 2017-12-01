/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:40:54 by pzhang            #+#    #+#             */
/*   Updated: 2017/11/30 20:27:55 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*temp;
	unsigned int	c;

	if (s && f)
	{
		temp = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (temp)
		{
			c = 0;
			while (s[c])
			{
				temp[c] = f(c, s[c]);
				c++;
			}
			temp[c] = '\0';
			return (temp);
		}
	}
	return (NULL);
}
