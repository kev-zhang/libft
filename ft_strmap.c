/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:27:02 by pzhang            #+#    #+#             */
/*   Updated: 2017/11/30 20:26:30 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*temp;
	int		c;

	if (s && f)
	{
		temp = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (temp)
		{
			c = 0;
			while (s[c])
			{
				temp[c] = f(s[c]);
				c++;
			}
			temp[c] = '\0';
			return (temp);
		}
	}
	return (NULL);
}
