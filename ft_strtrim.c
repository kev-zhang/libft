/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 18:32:57 by pzhang            #+#    #+#             */
/*   Updated: 2017/11/30 20:43:07 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*temp;
	int		b;
	int		e;
	int		c;

	if (s)
	{
		b = 0;
		e = (int)ft_strlen(s) - 1;
		while (s[b] && (s[b] == ' ' || s[b] == '\n' || s[b] == '\t'))
			b++;
		while (e > b && (s[e] == ' ' || s[e] == '\n' || s[e] == '\t'))
			e--;
		temp = (char*)malloc(sizeof(char) * (e - b + 2));
		if (temp)
		{
			c = 0;
			while (b <= e)
				temp[c++] = s[b++];
			temp[c] = '\0';
			return (temp);
		}
	}
	return (NULL);
}
