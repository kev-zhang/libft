/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:12:39 by pzhang            #+#    #+#             */
/*   Updated: 2017/11/27 15:44:08 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	c;

	c = 0;
	if (little[0] == '\0')
		return ((char*)big);
	while (big[c] && c + ft_strlen(little) <= len)
	{
		if (ft_strncmp(big + c, little, ft_strlen(little)) == 0)
			return ((char*)(big + c));
		c++;
	}
	return (NULL);
}
